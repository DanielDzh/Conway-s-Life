#include "header.h"

void Random(int height, int width, float time, int **matr, int **matr2, COORD pos, HANDLE hConsole){
	Attribut(&height, &width, &time, &pos, &pos2);
	
	matr=(int **)malloc(height*sizeof(int*));
	matr2=(int **)malloc(height*sizeof(int*));

	for(int countHeight = 0; countHeight < height; countHeight++){
        matr[countHeight]=(int *)malloc(width*sizeof(int));
       	matr2[countHeight]=(int *)malloc(width*sizeof(int));
	}
	int randNumb;
	for(int countHeight = 0; countHeight < height; countHeight++){
		for(int countWidth = 0; countWidth < width; countWidth++){
			randNumb = rand()%10;
			if(randNumb == 1 || randNumb == 2 || randNumb == 3 || randNumb == 4 || randNumb == 5){
				matr[countHeight][countWidth] = 250;
			}
			if(randNumb == 6 || randNumb == 7 || randNumb == 8 || randNumb == 9){
				matr[countHeight][countWidth] = 254;
			}
		}
	}
	system("cls");
	Life(height, width, matr, matr2, time, pos, hConsole);
}

void Bird(int **matr, int **matr2, COORD pos, HANDLE hConsole){
	matr=(int **)malloc(20*sizeof(int*));
	matr2=(int **)malloc(20*sizeof(int*));

	for(int countHeight = 0; countHeight < 20; countHeight++){
        matr[countHeight]=(int *)malloc(41*sizeof(int));
       	matr2[countHeight]=(int *)malloc(41*sizeof(int));
	}
	for(int countHeight = 0; countHeight < 20; countHeight++){
		for(int countWidth = 0; countWidth < 41; countWidth++){
			matr[countHeight][countWidth] = 250;
		}
	}
	system("cls");
	matr[8][3] = 254;
	matr[8][4] = 254;
	matr[9][2] = 254;
	matr[9][3] = 254;
	matr[9][4] = 254;
	matr[9][5] = 254;
	matr[10][2] = 254;
	matr[10][3] = 254;
	matr[10][5] = 254;
	matr[10][6] = 254;
	matr[11][4] = 254;
	matr[11][5] = 254;

	Life(20, 41, matr, matr2, 1, pos, hConsole);
}

void Crab(int **matr, int **matr2, COORD pos, HANDLE hConsole){	
	matr=(int **)malloc(21*sizeof(int*));
	matr2=(int **)malloc(21*sizeof(int*));

	for(int countHeight = 0; countHeight < 21; countHeight++){
        matr[countHeight]=(int *)malloc(42*sizeof(int));
       	matr2[countHeight]=(int *)malloc(42*sizeof(int));
	}
	for(int countHeight = 0; countHeight < 21; countHeight++){
		for(int countWidth = 0; countWidth < 42; countWidth++){
			matr[countHeight][countWidth] = 250;
		}
	}
	system("cls");
	matr[3][11] = matr[3][10] = matr[3][9] = 254;
	matr[4][11] = matr[4][9] = matr[4][8] = 254;
	matr[5][11] = matr[5][10] = matr[5][9] = matr[5][8] = matr[5][6] = 254;
	matr[6][5] = 254;
	matr[7][6] = matr[7][5] = 254;
	matr[8][5] = matr[8][4] = matr[8][3] = matr[8][2] = 254;
	matr[9][7] = matr[9][5] = 254;
	matr[10][8] = matr[10][5] = 254;
	matr[11][8] = matr[11][5] = 254;
	matr[12][7] = matr[12][5] = 254;
	matr[13][5] = matr[13][4] = matr[13][3] = matr[13][2] = 254;
	matr[14][6] = matr[14][5] = 254;
	matr[15][5] = 254;
	matr[16][11] = matr[16][10] = matr[16][9] = matr[16][8] = matr[16][6] = 254;
	matr[17][11] = matr[17][9] = matr[17][8] = 254;
	matr[18][11] = matr[18][10] = matr[18][9] = 254;

	Life(21, 42, matr, matr2, 1, pos, hConsole);
}
