#define map_name str1
#define c_wall 120 // Ascii value of X
#define space 32 // Ascii value of space
#define finish 62 // Ascii value of >

// Starting indexe of player start_y is for row and start_x is for column
#define start_y 1 
#define start_x 0

// Finishing indexe of player start_y is for row and start_x is for column
#define finish_y 41
#define finish_x 21
// Declaring the map size in form of rows and coloums
char str1[41][41] = {"					","					","					","					","					","					","					","					","					","					","					"};

//Defining the player map function
void level1(char player){
	
	str1[0][0]=c_wall;str1[0][1]=c_wall;str1[0][2]='S';str1[0][3]=c_wall;str1[0][4]=c_wall;str1[0][5]=c_wall;str1[0][6]=c_wall;str1[0][7]=c_wall;str1[0][8]=c_wall;str1[0][9]=c_wall;str1[0][10]=c_wall;str1[0][11]=c_wall;str1[0][12]=c_wall;str1[0][13]=c_wall;str1[0][14]=c_wall;str1[0][15]=c_wall;str1[0][16]=c_wall;str1[0][17]=c_wall;str1[0][18]=c_wall;str1[0][19]=c_wall;str1[0][20]=c_wall;str1[0][21]=c_wall;str1[0][22]=c_wall;str1[0][23]=c_wall;str1[0][24]=c_wall;str1[0][25]=c_wall;str1[0][26]=c_wall;str1[0][27]=c_wall;str1[0][28]=c_wall;str1[0][29]=c_wall;str1[0][30]=c_wall;str1[0][31]=c_wall;str1[0][32]=c_wall;str1[0][33]=c_wall;str1[0][34]=c_wall;str1[0][35]=c_wall;str1[0][36]=c_wall;str1[0][37]=c_wall;str1[0][38]=c_wall;str1[0][39]=c_wall;
	str1[1][0]=c_wall; str1[1][1]=space;str1[1][2]=space;str1[1][3]=space ;str1[1][4]=space ;str1[1][5]=space ;str1[1][6]=space ;str1[1][7]=space;str1[1][8]=space ;str1[1][9]=space;str1[1][10]=space;str1[1][11]=space;str1[1][12]=space;str1[1][13]=space;str1[1][14]=space;str1[1][15]=space;str1[1][16]=space;str1[1][17]=space;str1[1][18]=space;str1[1][19]=space;str1[1][20]=space;str1[1][21]=space;str1[1][22]=space;str1[1][23]=space;str1[1][24]=c_wall;str1[1][25]=space;str1[1][26]=space;str1[1][27]=space;str1[1][28]=space;str1[1][29]=space;str1[1][30]=space;str1[1][31]=space;str1[1][32]=space;str1[1][33]=space;str1[1][34]=space;str1[1][35]=c_wall;str1[1][36]=space;str1[1][37]=space;str1[1][38]=space;str1[1][39]=c_wall;
	printf("\n");
	str1[2][0]=c_wall; str1[2][1]=space;str1[2][2]=space;str1[2][3]=c_wall ;str1[2][4]=space;str1[2][5]=c_wall;str1[2][6]=space ;str1[2][7]=c_wall ;str1[2][8]=c_wall ;str1[2][9]=c_wall;str1[2][10]=c_wall;str1[2][11]=c_wall;str1[2][12]=c_wall;str1[2][13]=c_wall;str1[2][14]=c_wall;str1[2][15]=c_wall;str1[2][16]=c_wall;str1[2][17]=c_wall;str1[2][18]=c_wall;str1[2][19]=c_wall;str1[2][20]=c_wall;str1[2][21]=c_wall;str1[2][22]=c_wall;str1[2][23]=space;str1[2][24]=c_wall;str1[2][25]=space;str1[2][26]=space;str1[2][27]=space;str1[2][28]=space;str1[2][29]=space;str1[2][30]=space;str1[2][31]=space;str1[2][32]=space;str1[2][33]=space;str1[2][34]=space;str1[2][35]=space;str1[2][36]=space;str1[2][37]=space;str1[2][38]=space;str1[2][39]=c_wall;
	printf("\n");
	str1[3][0]=c_wall; str1[3][1]=space ;str1[3][2]=space;str1[3][3]=c_wall ;str1[3][4]=space ;str1[3][5]=c_wall ;str1[3][6]=space;str1[3][7]=space ;str1[3][8]=space;str1[3][9]=space;str1[3][10]=space;str1[3][11]=space;str1[3][12]=space;str1[3][13]=space;str1[3][14]=space;str1[3][15]=space;str1[3][16]=space;str1[3][17]=space;str1[3][18]=space;str1[3][19]=space;str1[3][20]=space;str1[3][21]=space;str1[3][22]=c_wall;str1[3][23]=space;str1[3][24]=c_wall;str1[3][25]=space;str1[3][26]=space;str1[3][27]=space;str1[3][28]=c_wall;str1[3][29]=space;str1[3][30]=space;str1[3][31]=space;str1[3][32]=space;str1[3][33]=space;str1[3][34]=space;str1[3][35]=c_wall;str1[3][36]=space;str1[3][37]=space;str1[3][38]=space;str1[3][39]=c_wall;
	printf("\n");
	str1[4][0]=c_wall; str1[4][1]=space ;str1[4][2]=space ;str1[4][3]=c_wall ;str1[4][4]=space;str1[4][5]=c_wall ;str1[4][6]=space;str1[4][7]=space ;str1[4][8]=space ;str1[4][9]=space;str1[4][10]=space;str1[4][11]=space;str1[4][12]=space;str1[4][13]=space;str1[4][14]=space;str1[4][15]=space;str1[4][16]=c_wall;str1[4][17]=c_wall;str1[4][18]=c_wall;str1[4][19]=c_wall;str1[4][20]=c_wall;str1[4][21]=space;str1[4][22]=c_wall;str1[4][23]=space;str1[4][24]=c_wall;str1[4][25]=space;str1[4][26]=space;str1[4][27]=space;str1[4][28]=c_wall;str1[4][29]=space;str1[4][30]=space;str1[4][31]=space;str1[4][32]=space;str1[4][33]=space;str1[4][34]=space;str1[4][35]=c_wall;str1[4][36]=space;str1[4][37]=c_wall;str1[4][38]=c_wall;str1[4][39]=c_wall;
	printf("\n");
	str1[5][0]=c_wall; str1[5][1]=space;str1[5][2]=space;str1[5][3]=c_wall ;str1[5][4]=space;str1[5][5]=c_wall;str1[5][6]=c_wall;str1[5][7]=c_wall;str1[5][8]=c_wall ;str1[5][9]=space;str1[5][10]=space;str1[5][11]=space;str1[5][12]=space;str1[5][13]=space;str1[5][14]=space;str1[5][15]=space;str1[5][16]=c_wall;str1[5][17]=space;str1[5][18]=space;str1[5][19]=space;str1[5][20]=c_wall;str1[5][21]=space;str1[5][22]=c_wall;str1[5][23]=space;str1[5][24]=c_wall;str1[5][25]=c_wall;str1[5][26]=c_wall;str1[5][27]=space;str1[5][28]=c_wall;str1[5][29]=c_wall;str1[5][30]=space;str1[5][31]=space;str1[5][32]=space;str1[5][33]=space;str1[5][34]=space;str1[5][35]=c_wall;str1[5][36]=space;str1[5][37]=space;str1[5][38]=space;str1[5][39]=c_wall;
	printf("\n");
	str1[6][0]=c_wall; str1[6][1]=space ;str1[6][2]=space ;str1[6][3]=c_wall ;str1[6][4]=space ;str1[6][5]=space ;str1[6][6]=space ;str1[6][7]=space;str1[6][8]=space ;str1[6][9]=space;str1[6][10]=space;str1[6][11]=space;str1[6][12]=space;str1[6][13]=space;str1[6][14]=space;str1[6][15]=space;str1[6][16]=c_wall;str1[6][17]=space;str1[6][18]=space;str1[6][19]=space;str1[6][20]=c_wall;str1[6][21]=space;str1[6][22]=c_wall;str1[6][23]=space;str1[6][24]=space;str1[6][25]=space;str1[6][26]=c_wall;str1[6][27]=space;str1[6][28]=c_wall;str1[6][29]=space;str1[6][30]=space;str1[6][31]=c_wall;str1[6][32]=c_wall;str1[6][33]=c_wall;str1[6][34]=c_wall;str1[6][35]=c_wall;str1[6][36]=space;str1[6][37]=space;str1[6][38]=space;str1[6][39]=c_wall;
	printf("\n");
	str1[7][0]=c_wall; str1[7][1]=space ;str1[7][2]=space;str1[7][3]=c_wall;str1[7][4]=space;str1[7][5]=space ;str1[7][6]=space;str1[7][7]=space;str1[7][8]=space ;str1[7][9]=space;str1[7][10]=space;str1[7][11]=space;str1[7][12]=space;str1[7][13]=space;str1[7][14]=space;str1[7][15]=space;str1[7][16]=c_wall;str1[7][17]=space;str1[7][18]=c_wall;str1[7][19]=space;str1[7][20]=c_wall;str1[7][21]=space;str1[7][22]=c_wall;str1[7][23]=c_wall;str1[7][24]=c_wall;str1[7][25]=space;str1[7][26]=c_wall;str1[7][27]=space;str1[7][28]=c_wall;str1[7][29]=space;str1[7][30]=space;str1[7][31]=c_wall;str1[7][32]=space;str1[7][33]=space;str1[7][34]=space;str1[7][35]=space;str1[7][36]=space;str1[7][37]=space;str1[7][38]=space;str1[7][39]=c_wall;
	printf("\n");
	str1[8][0]=c_wall; str1[8][1]=space ;str1[8][2]=space ;str1[8][3]=c_wall ;str1[8][4]=c_wall;str1[8][5]=c_wall ;str1[8][6]=space ;str1[8][7]=space;str1[8][8]=space ;str1[8][9]=space;str1[8][10]=space;str1[8][11]=space;str1[8][12]=space;str1[8][13]=space;str1[8][14]=c_wall;str1[8][15]=c_wall;str1[8][16]=c_wall;str1[8][17]=space;str1[8][18]=c_wall;str1[8][19]=space;str1[8][20]=c_wall;str1[8][21]=space;str1[8][22]=space;str1[8][23]=space;str1[8][24]=c_wall;str1[8][25]=space;str1[8][26]=c_wall;str1[8][27]=space;str1[8][28]=c_wall;str1[8][29]=space;str1[8][30]=space;str1[8][31]=c_wall;str1[8][32]=space;str1[8][33]=space;str1[8][34]=space;str1[8][35]=space;str1[8][36]=space;str1[8][37]=space;str1[8][38]=space;str1[8][39]=c_wall;
	printf("\n");
	str1[9][0]=c_wall; str1[9][1]=space;str1[9][2]=space;str1[9][3]=space;str1[9][4]=space;str1[9][5]=space;str1[9][6]=c_wall;str1[9][7]=space;str1[9][8]=space;str1[9][9]=space;str1[9][10]=space;str1[9][11]=space;str1[9][12]=space;str1[9][13]=space;str1[9][14]=c_wall;str1[9][15]=space;str1[9][16]=space;str1[9][17]=space;str1[9][18]=c_wall;str1[9][19]=space;str1[9][20]=c_wall;str1[9][21]=space;str1[9][22]=space;str1[9][23]=space;str1[9][24]=c_wall;str1[9][25]=space;str1[9][26]=c_wall;str1[9][27]=space;str1[9][28]=c_wall;str1[9][29]=space;str1[9][30]=space;str1[9][31]=c_wall;str1[9][32]=space;str1[9][33]=space;str1[9][34]=space;str1[9][35]=space;str1[9][36]=space;str1[9][37]=space;str1[9][38]=space;str1[9][39]=c_wall;
	
	printf("\n");
	str1[10][0]=c_wall; str1[10][1]=space;str1[10][2]=space;str1[10][3]='o';str1[10][4]='o';str1[10][5]='o';str1[10][6]=c_wall;str1[10][7]=space;str1[10][8]=space;str1[10][9]=space;str1[10][10]=space;str1[10][11]=space;str1[10][12]=space;str1[10][13]=space;str1[10][14]=c_wall;str1[10][15]=space;str1[10][16]=c_wall;str1[10][17]=c_wall;str1[10][18]=c_wall;str1[10][19]=space;str1[10][20]=c_wall;str1[10][21]=space;str1[10][22]=space;str1[10][23]=space;str1[10][24]=space;str1[10][25]=space;str1[10][26]=c_wall;str1[10][27]=space;str1[10][28]=c_wall;str1[10][29]=space;str1[10][30]=space;str1[10][31]=c_wall;str1[10][32]=space;str1[10][33]=space;str1[10][34]=space;str1[10][35]=space;str1[10][36]=space;str1[10][37]=space;str1[10][38]=space;str1[10][39]=c_wall;
	printf("\n");
	str1[11][0]=c_wall; str1[11][1]=space ;str1[11][2]=space;str1[11][3]='o' ;str1[11][4]='o' ;str1[11][5]='o';str1[11][6]=c_wall ;str1[11][7]=space;str1[11][8]=space ;str1[11][9]=space;str1[11][10]=space;str1[11][11]=space;str1[11][12]=space;str1[11][13]=space;str1[11][14]=c_wall;str1[11][15]=space;str1[11][16]=c_wall;str1[11][17]=space;str1[11][18]=space;str1[11][19]=space;str1[11][20]=c_wall;str1[11][21]=space;str1[11][22]=space;str1[11][23]=space;str1[11][24]=c_wall;str1[11][25]=space;str1[11][26]=c_wall;str1[11][27]=space;str1[11][28]=c_wall;str1[11][29]=space;str1[11][30]=space;str1[11][31]=c_wall;str1[11][32]=space;str1[11][33]=',';str1[11][34]=space;str1[11][35]=space;str1[11][36]=space;str1[11][37]=space;str1[11][38]=space;str1[11][39]=c_wall;
	printf("\n");
	str1[12][0]=c_wall; str1[12][1]=space;str1[12][2]=space;str1[12][3]='o' ;str1[12][4]='o';str1[12][5]='o';str1[12][6]=c_wall;str1[12][7]=space ;str1[12][8]=c_wall ;str1[12][9]=c_wall;str1[12][10]=c_wall;str1[12][11]=c_wall;str1[12][12]=c_wall;str1[12][13]=space;str1[12][14]=c_wall;str1[12][15]=space;str1[12][16]=c_wall;str1[12][17]=space;str1[12][18]=space;str1[12][19]=space;str1[12][20]=c_wall;str1[12][21]=space;str1[12][22]=space;str1[12][23]=space;str1[12][24]=c_wall;str1[12][25]=space;str1[12][26]=c_wall;str1[12][27]=c_wall;str1[12][28]=c_wall;str1[12][29]=space;str1[12][30]=c_wall;str1[12][31]=space;str1[12][32]=space;str1[12][33]=c_wall;str1[12][34]=c_wall;str1[12][35]=c_wall;str1[12][36]=c_wall;str1[12][37]=c_wall;str1[12][38]=c_wall;str1[12][39]=c_wall;
	printf("\n");
	str1[13][0]=c_wall; str1[13][1]=space;str1[13][2]=space;str1[13][3]='o' ;str1[13][4]='o' ;str1[13][5]='o';str1[13][6]=c_wall;str1[13][7]=space ;str1[13][8]=c_wall;str1[13][9]=space;str1[13][10]=space;str1[13][11]=space;str1[13][12]=c_wall;str1[13][13]=space;str1[13][14]=c_wall;str1[13][15]=space;str1[13][16]=c_wall;str1[13][17]=space;str1[13][18]=c_wall;str1[13][19]=space;str1[13][20]=c_wall;str1[13][21]=c_wall;str1[13][22]=space;str1[13][23]=space;str1[13][24]=c_wall;str1[13][25]=space;str1[13][26]=space;str1[13][27]=space;str1[13][28]=space;str1[13][29]=space;str1[13][30]=c_wall;str1[13][31]=space;str1[13][32]=space;str1[13][33]=c_wall;str1[13][34]=space;str1[13][35]=space;str1[13][36]=space;str1[13][37]=space;str1[13][38]=space;str1[13][39]=c_wall;
	printf("\n");
	str1[14][0]=c_wall; str1[14][1]=space ;str1[14][2]=space ;str1[14][3]=space ;str1[14][4]=space;str1[14][5]=space ;str1[14][6]=c_wall;str1[14][7]=space ;str1[14][8]=c_wall ;str1[14][9]=space;str1[14][10]=c_wall;str1[14][11]=space;str1[14][12]=space;str1[14][13]=space;str1[14][14]=c_wall;str1[14][15]=space;str1[14][16]=c_wall;str1[14][17]=space;str1[14][18]=c_wall;str1[14][19]=space;str1[14][20]=space;str1[14][21]=c_wall;str1[14][22]=space;str1[14][23]=space;str1[14][24]=c_wall;str1[14][25]=space;str1[14][26]=c_wall;str1[14][27]=space;str1[14][28]=space;str1[14][29]=space;str1[14][30]=c_wall;str1[14][31]=space;str1[14][32]=space;str1[14][33]=c_wall;str1[14][34]=space;str1[14][35]=space;str1[14][36]='o';str1[14][37]='o';str1[14][38]='o';str1[14][39]=c_wall;
	printf("\n");
	str1[15][0]=c_wall; str1[15][1]=c_wall;str1[15][2]=space;str1[15][3]=c_wall ;str1[15][4]=c_wall;str1[15][5]=c_wall;str1[15][6]=c_wall;str1[15][7]=c_wall;str1[15][8]=c_wall ;str1[15][9]=space;str1[15][10]=c_wall;str1[15][11]=space;str1[15][12]=c_wall;str1[15][13]=c_wall;str1[15][14]=c_wall;str1[15][15]=space;str1[15][16]=c_wall;str1[15][17]=c_wall;str1[15][18]=c_wall;str1[15][19]=c_wall;str1[15][20]=space;str1[15][21]=c_wall;str1[15][22]=c_wall;str1[15][23]=c_wall;str1[15][24]=c_wall;str1[15][25]=c_wall;str1[15][26]=c_wall;str1[15][27]=c_wall;str1[15][28]=c_wall;str1[15][29]=c_wall;str1[15][30]=c_wall;str1[15][31]=c_wall;str1[15][32]=c_wall;str1[15][33]=c_wall;str1[15][34]=space;str1[15][35]=space;str1[15][36]='o';str1[15][37]='o';str1[15][38]='o';str1[15][39]=c_wall;
	printf("\n");
	str1[16][0]=c_wall; str1[16][1]=space ;str1[16][2]=space ;str1[16][3]=space ;str1[16][4]=space ;str1[16][5]=space ;str1[16][6]=space ;str1[16][7]=space;str1[16][8]=space ;str1[16][9]=space;str1[16][10]=c_wall;str1[16][11]=space;str1[16][12]=space;str1[16][13]=space;str1[16][14]=space;str1[16][15]=space;str1[16][16]=space;str1[16][17]=space;str1[16][18]=space;str1[16][19]=c_wall;str1[16][20]=space;str1[16][21]=space;str1[16][22]=space;str1[16][23]=space;str1[16][24]=space;str1[16][25]=space;str1[16][26]=c_wall;str1[16][27]=space;str1[16][28]=space;str1[16][29]=space;str1[16][30]=space;str1[16][31]=space;str1[16][32]=space;str1[16][33]=space;str1[16][34]=space;str1[16][35]=space;str1[16][36]='o';str1[16][37]='o';str1[16][38]='o';str1[16][39]=c_wall;
	printf("\n");
	str1[17][0]=c_wall; str1[17][1]=space ;str1[17][2]=space ;str1[17][3]=space ;str1[17][4]=space ;str1[17][5]=c_wall ;str1[17][6]=space;str1[17][7]=space;str1[17][8]=space ;str1[17][9]=space;str1[17][10]=c_wall;str1[17][11]=space;str1[17][12]=space;str1[17][13]=c_wall;str1[17][14]=space;str1[17][15]=space;str1[17][16]=space;str1[17][17]=space;str1[17][18]=space;str1[17][19]=c_wall;str1[17][20]=space;str1[17][21]=space;str1[17][22]=space;str1[17][23]=space;str1[17][24]=space;str1[17][25]=space;str1[17][26]=space;str1[17][27]=space;str1[17][28]=space;str1[17][29]=space;str1[17][30]=space;str1[17][31]=space;str1[17][32]=space;str1[17][33]=space;str1[17][34]=c_wall;str1[17][35]=space;str1[17][36]=space;str1[17][37]=space;str1[17][38]=space;str1[17][39]=c_wall;
	printf("\n");
	str1[18][0]=c_wall; str1[18][1]=space ;str1[18][2]=space ;str1[18][3]=space ;str1[18][4]=space ;str1[18][5]=c_wall ;str1[18][6]=space ;str1[18][7]=space;str1[18][8]=space ;str1[18][9]=space;str1[18][10]=c_wall;str1[18][11]=space;str1[18][12]=space;str1[18][13]=c_wall;str1[18][14]=space;str1[18][15]=space;str1[18][16]=space;str1[18][17]=space;str1[18][18]=space;str1[18][19]=c_wall;str1[18][20]=space;str1[18][21]=space;str1[18][22]=space;str1[18][23]=space;str1[18][24]=space;str1[18][25]=space;str1[18][26]=c_wall;str1[18][27]=space;str1[18][28]=space;str1[18][29]=space;str1[18][30]=space;str1[18][31]=space;str1[18][32]=space;str1[18][33]=space;str1[18][34]=c_wall;str1[18][35]=space;str1[18][36]=space;str1[18][37]=space;str1[18][38]=space;str1[18][39]=c_wall;
	str1[19][0]=c_wall; str1[19][1]=c_wall;str1[19][2]=c_wall;str1[19][3]=c_wall;str1[19][4]=c_wall;str1[19][5]=c_wall;str1[19][6]=c_wall;str1[19][7]=c_wall;str1[19][8]=c_wall;str1[19][9]=c_wall; str1[19][10]=c_wall;str1[19][11]=c_wall;str1[19][12]=c_wall;str1[19][13]=c_wall;str1[19][14]=c_wall;str1[19][15]=c_wall;str1[19][16]=c_wall;str1[19][17]=c_wall;str1[19][18]=c_wall;str1[19][19]=c_wall;str1[19][20]=c_wall;str1[19][21]=c_wall;str1[19][22]=c_wall;str1[19][23]=c_wall;str1[19][24]=c_wall;str1[19][25]=c_wall;str1[19][26]=c_wall;str1[19][27]=c_wall;str1[19][28]=c_wall;str1[19][29]=c_wall;str1[19][30]=c_wall;str1[19][31]=c_wall;str1[19][32]=c_wall;str1[19][33]=c_wall;str1[19][34]=c_wall;str1[19][35]=c_wall;str1[19][36]='E';str1[19][37]=c_wall;str1[19][38]=c_wall;str1[19][39]=c_wall;

}
