#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include "levels.h"
#include <stdio.h>
#include <stdlib.h>



#define number_of_move 80

#define default_flag 1

void init();
void warning();
void menu();
void openfile();
void display();
void Mcontrol();
void Acontrol();
void alloc_maze();
void alloc_visited();
void get_maze(char* );
void init_visited();
void print_maze();
void add_crumbs();
int dfs(int , int );




char direction;
char character;
char wall[0];

char player= '>';
int counter;   
int k,l,i,j;
int flag;
int temp = 0;
char** maze;
int** visited;
int rows;
int cols;
int start_row;
int start_col;



int main(){      

	system("color B");
	printf("\n\t-Simple Areena based maze game in C - ");
    
    // Instruction for Manual Mood
	printf("\n\n\t-(For Manual Mood Use the keyboard keys to Move)");
	printf("\n\n\t-(Press F For Forward)");
	printf("\n\t-(Press B For Backword)");
	printf("\n\t-(Press R For Rotate)");
    
   
	menu();

	while(1){	
		
		// Press A For Autamotic Mood
    	character = getch();// getch() is function that will take character input from kerboard
		if(character == 'A' || character == 'a')// compare check
		{
    		Acontrol();	// Function calling of manual mood		
		}
		
		// Press M For Manual Mood
		if(character == 'M' || character == 'm')// compare check
		{
    		Mcontrol();	// Function calling of Automatic mood		
		}
	
		if(character == 'E' || character == 'e') // compare check
		{	
			Sleep(500);	
			system("CLS");//it will clear previous screens
			printf("\n\t Exit.");
			
			break;
		}
    		
	}
	getch();
	return 0;
}
				 					

void init(){
	
	wall[0]=c_wall ;	
	flag=default_flag;
	counter = number_of_move;
	i=start_y;
	j=start_x;

}

void warning()//method if collision occur in game means player hitting the rooms boundry
{
	printf("\a\n\n --> !! You hit the wall. !! \n\n");
}

void menu()//meun for auto and manual mode show on screen
{
	printf("\n\n\t\tMENU\n\n\tPress A For Automaticate PLAY\n\tPress M For Manual Play\n\tPress E For EXIT\n");
}

void openfile()//it will open the maze.txt file
{
	FILE *filePointer;//loadng data from file
}

void display()// display functon will dsplay and update as u make moves
{
	
	system("CLS");// clear function  to clear screen
	system("color B");//color for console sets
	
	//----------------------------	
	printf( "\n\tNumber of moves: %d\n\n", counter-1 );
	for( k = 0; k < 20; k++ ) //representing num of rows
	{
		printf( "   " );
		for( l = 0; l < 41; l++ )//representing num of columns
		{
			printf( "%c", str1[ k ][ l ] );
		}
		printf( "\n" );//for new line
	}
	printf( "\n ! Press F=Forward B=Backward R=Rotate 90 keys to move.");
	printf( "\n ! Press E to end. ");
	//----------------------------	
    }



enum terrain {
	empty,
	walls,
	goal,
	crumb
};

void alloc_maze()
{
	maze = malloc(rows * sizeof(char*));
	
	int i;
	for (i = 0; i < rows; ++i){
		maze[i] = malloc(cols * sizeof(char*));
	}
}


void alloc_visited()
{
	visited = malloc(rows * sizeof(int*));
	int i;
	for (i = 0; i < rows; ++i){
		visited[i] = malloc(cols * sizeof(int*));
	}
}

void get_maze(char* file_name)
{
	char c;
	char rows_s[3] = { '\0' };
	char cols_s[3] = { '\0' };
	int rows_i = 0;
	int cols_i = 0;
	int swap = 0;

	FILE* maze_file = fopen(file_name, "r");

	if (maze_file) {
		while ((c = getc(maze_file)) != EOF) {
			if (c == '\n') {
				break;
			} else if (c == ','){
				swap = 1;
			} else if (!swap) {
				rows_s[rows_i] = c;
				rows_i++;
			} else {
				cols_s[cols_i] = c;
				cols_i++;
			}
		}
	} else {
		printf("No such file!");
		return;
	}

	rows = atoi(rows_s);
	cols = atoi(cols_s);

	alloc_maze();
	
	int i,j;

	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {

			if ((c = getc(maze_file)) == '\n') {
				c = getc(maze_file);
			}

			maze[i][j] = c;

			if (c =='S') {
				start_row = i;
				start_col = j;
			}
		}
	}

	fclose(maze_file);
}

void init_visited()
{
	alloc_visited();

	int i, j;
	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {
			if (maze[i][j] == 'x') {
				visited[i][j] = walls;
			} else if (maze[i][j] == 'E') {
				visited[i][j] = goal;
			} else {
				visited[i][j] = empty;
			}
		}
	}
}	

void print_maze()
{
	int i, j;
	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
}

void add_crumbs()
{
	int i, j;
	for (i = 0; i < rows; ++i) {
		for (j = 0; j < cols; ++j) {
			if (maze[i][j] != 'S' && visited[i][j] == crumb) {
				if(crumb==visited[i+1][j])
				{
				maze[i][j] = 'v';
			}
			else
			{
				maze[i][j]='>';
			}
			}
		}
	}
}

int dfs(int row, int col)
{
	int* current = &visited[row][col];

	if (*current == goal) {
		return 1;
	}

	if (*current == empty) {
		*current = crumb;

		if (dfs(row, col - 1)){
			*current = crumb;
			return 1;
		} 
		if (dfs(row + 1, col)){
			*current = crumb;
			return 1;
		} 
		if (dfs(row, col + 1)){
			*current = crumb;
			return 1;		
		} 
		if (dfs(row - 1, col)){
			*current = crumb;
			return 1;
		}
	}

	return 0;
}
    
void Mcontrol()
{
	
	init();//loads initial states
	level1(player);// the data that is loaded from file and passes to the function calling named level 1
	display();//display functions called
	
	while(flag!=0)//checking whle flag not eqal to 0 vome in while loop
	{
		direction = getch();//geting character and stores in dtrection varible
		display();// display functions called

		if( direction == 'B' || direction == 'b'  )//b pressed maean backword and checkng if true come in if other wise else and show warning
		{	
			if(player=='>')
{			if(map_name[i][j-1] != wall[0] && map_name[i][j-1] !='\0' && map_name[i][j-1] != 'o' )//if check compare wheater not goig out of boundary
			{
				player='>';
				map_name[i][j] = space;//
				map_name[i][--j] = player;//	
				display();//display functio called
			
		}
	
			else
				warning();
			}
			if(player=='v'){
			
			if(map_name[i-1][j] != wall[0] && map_name[i-1][j] != 'o' )
			{
				map_name[i][j] = space;
				map_name[--i][j] = player;
				display();
			}
			else
				warning();
		
		}}
		if( direction == 'F' || direction == 'f'  )//for forward direction
		{	
			if(player=='>'){
			
			if(map_name[i][j+1] != wall[0] && map_name[i][j+1] != 'o' )
			{
				map_name[i][j] = space;
				map_name[i][++j] = player;
				display();
			}
		
			else
				warning();
	}
			if(player=='v'){
			
			if(map_name[i+1][j] != wall[0] && map_name[i+1][j] != 'o' )
			{
			map_name[i][j] = space;
			map_name[++i][j] = player;
			display();
			}
		
		
			else
				warning();
	}
		}

	if( direction == 'R' || direction == 'r'  )//for Rotate 90 degree
{

char z;
char x;
z='R';
x='r';	

 temp = temp +1;
			
			
		switch(temp)
		{
			case 1:
				player='v';
				map_name[i][j]=player;
				display();
			break;

			//case 2:
			//	player='>';
			//	map_name[i][j]=player;
			//	display();
			//	break;
			//case 3:
			//	player='^';
			//	map_name[i][j]=player;
			//	display();
			//	break;
			//case 4:
			//	player='>';
			//	map_name[i][j]=player;
			//	display();
			//	break;
			default:
				player='>';
				map_name[i][j]=player;
				display();
			
		}
		if (temp ==2)
		temp =0;
}	

	
		if( direction == 'E' || direction == 'e'  )//it will exit the program
		{
			flag=0;
			system("CLS");//clear screen
			printf("\n\t Exit.");
			printf("\n\n\t\tPress E To EXIT\n");
		}
		
		counter=counter-1;

		//Finish 	
		if(counter == 0)
		{
			flag=0;
			system("color 7C");//sets color
			printf("\n\n\tYOU LOSE! :( \n");
			menu();//menu function called
		}
		else if(map_name[finish_y][finish_x] == player)
		{
			flag=0;
			system("color 0A");
			printf("\n\n\tYOU WIN! :) \n");
			menu();
		}
		//-------
	}
}

void Acontrol()
{
	

	get_maze("maze.txt");
	init_visited();

	print_maze();

	if (!dfs(start_row, start_col)) {
		printf("No path to the goal could be found.\n");
	} else {
		add_crumbs();
		print_maze();
	}


}









