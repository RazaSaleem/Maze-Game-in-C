
#define player '>' // define Player
#define number_of_move 80 // number of moves for the game.

#define default_flag 1

char direction; // Declartion direction variable to store current move 
char character;// Declartion chracter variable for the moves
char wall[0];//Declartion of an array named wall
int counter;   //conunts the num of moves
int k,l,i,j;
int flag;// stores true or false

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
	for( k = 0; k < 21; k++ ) //representing num of rows
	{
		printf( "   " );
		for( l = 0; l < 38; l++ )//representing num of columns
		{
			printf( "%c", str1[ k ][ l ] );
		}
		printf( "\n" );//for new line
	}
	printf( "\n ! Press F=Forward B=Backward R=Rotate 90 keys to move.");
	printf( "\n ! Press E to end. ");
	//----------------------------	
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
			if(map_name[i][j-1] != wall[0] && map_name[i][j-1] !=NULL )//if check compare wheater not goig out of boundary
			{
				map_name[i][j] = space;//
				map_name[i][--j] = player;//	
				display();//display functio called
			}
			else
				warning();
		}
		if( direction == 'F' || direction == 'f'  )//for forward direction
		{	
			if(map_name[i][j+1] != wall[0] )
			{
				map_name[i][j] = space;
				map_name[i][++j] = player;
				display();
			}
			else
				warning();
		}
		if( direction == 'R' || direction == 'r'  )//for Rotate 90 degree
		{
		
			if(map_name[i-1][j] != wall[0] )//if no wall in 90 direction then move there
						{
			map_name[i][j] = space;
			map_name[--i][j] = player;
			display();
			}
			else
				warning();
		}
		if( direction == 'S' || direction == 's'  )//if no wall in downward direction then goes downward
		{
			if(map_name[i+1][j] != wall[0] )
			{
				map_name[i][j] = space;
				map_name[++i][j] = player;
				display();
			}
			else
				warning();
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
	
	init();//loads initial states
	level1(player);// the data that is loaded from file and passes to the function calling named level 1
	display();//display functions called
	
	while(flag!=0)//checking whle flag not eqal to 0 vome in while loop
	{
		char c;
    	int r;
    	
    	r = rand() % 4; // generating random number and taking its modules
    	c = 'a' + r; //converting number in to character
    	
		direction = c; //storing charcater c to direction variable
		display();// display functions called

		if( direction == 'B' || direction == 'b'  )//b pressed maean backword and checkng if true come in if other wise else and show warning
		{	
			if(map_name[i][j-1] != wall[0] && map_name[i][j-1] !=NULL )//if check compare wheater not goig out of boundary
			{
				map_name[i][j] = space;//
				map_name[i][--j] = player;//	
				display();//display functio called
			}
			else
				warning();
		}
		if( direction == 'A' || direction == 'a'  )//for forward direction
		{	
			if(map_name[i][j+1] != wall[0] )
			{
				map_name[i][j] = space;
				map_name[i][++j] = player;
				display();
			}
			else
				warning();
		}
		if( direction == 'C' || direction == 'c'  )//for up ward direction
		{
		
			if(map_name[i-1][j] != wall[0] )//if no wall in upward direction then goes upward
			{
			map_name[i][j] = space;
			map_name[--i][j] = player;
			display();
			}
			else
				warning();
		}
		if( direction == 'D' || direction == 'd'  )//if no wall in downward direction then goes downward
		{
			if(map_name[i+1][j] != wall[0] )
			{
				map_name[i][j] = space;
				map_name[++i][j] = player;
				display();
			}
			else
				warning();
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



