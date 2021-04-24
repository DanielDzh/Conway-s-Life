#include "header.h"

void playMenu(int *height, int *width, float *time, int **matr, int **matr2, int *x, int *y, COORD *pos, COORD *pos2, int *y2, char *keyMoving){
	Attribut(*&height, *&width, *&time, *&pos, *&pos2);	
	matr=(int **)malloc((*height)*sizeof(int*));
	matr2=(int **)malloc((*height)*sizeof(int*));
    	
	for(int countHeight = 0; countHeight < *height; countHeight++){
	    matr[countHeight]=(int *)malloc((*width)*sizeof(int));
        matr2[countHeight]=(int *)malloc((*width)*sizeof(int));
	}
	*x = 41;
	*y = 3;
	
	for(int countHeight = 0; countHeight < *height; countHeight++){
		Delet(*x, *y, *pos, hConsole);
		
		for(int countWidth = 0; countWidth < *width; countWidth++){
			matr[countHeight][countWidth] = 250;
			printf("%c", matr[countHeight][countWidth]);
		}
		printf("\n");
		*y = *y + 1;
	}
	MotionButtons(*height, *width);
	pos->X = 40, pos->Y = 2;
	pos2->X = (short)((*width)+41), pos2->Y = (short)((*height)+3);
	ramka(*pos, *pos2);
	cursorOn();
	*y2 = 3;
	*x = 41;
	*y = 3;
	Delet(*x, *y, *pos, hConsole);
	
	while(*keyMoving != 27){
		*keyMoving = getch();
		if(matr[*y-3][*x-41] == 250){
			if(*keyMoving == 13){
				matr[*y-3][*x-41] = 254;
				system("cls");
				MotionButtons(*height, *width);
				ramka(*pos, *pos2);
				Delet(41, 3, *pos, hConsole);
				*y2 = 3;
					
				for(int countHeight = 0; countHeight < *height; countHeight++){
					Delet(41, *y2, *pos, hConsole);
					for(int countWidth = 0; countWidth < *width; countWidth++){
						printf("%c", matr[countHeight][countWidth]);
					}
					*y2 = *y2 + 1;
					printf("\n");
				}
				Delet(*x, *y, *pos, hConsole);
			}
			if(*keyMoving == -94 || *keyMoving == 100){
				*x = *x + 1;
				Delet(*x, *y, *pos, hConsole);
			}
			else if(*keyMoving == 63 || *keyMoving == 115){
				*y = *y + 1;
				Delet(*x, *y, *pos, hConsole);
			}
			else if(*keyMoving == -28 || *keyMoving == 97){
				*x = *x - 1;
				Delet(*x, *y, *pos, hConsole);
			}
			else if(*keyMoving == -26 || *keyMoving == 119){
				*y = *y - 1;
				Delet(*x, *y, *pos, hConsole);
			}
		}
		else{
			if(*keyMoving == 13){
				matr[*y-3][*x-41] = 250;
				system("cls");
				MotionButtons(*height, *width);
				ramka(*pos, *pos2);
				Delet(41, 3, *pos, hConsole);
				*y2 = 3;
				for(int countHeight = 0; countHeight < *height; countHeight++){
					Delet(41, *y2, *pos, hConsole);
					for(int countWidth = 0; countWidth < *width; countWidth++){
						printf("%c", matr[countHeight][countWidth]);
					}
					*y2 = *y2 + 1;
					printf("\n");
				}
				Delet(*x, *y, *pos, hConsole);
			}
			if(*keyMoving == -94 || *keyMoving == 100){
				*x = *x + 1;
				Delet(*x, *y, *pos, hConsole);
			}
			else if(*keyMoving == 63 || *keyMoving == 115){
				*y = *y + 1;
				Delet(*x, *y, *pos, hConsole);
			}
			else if(*keyMoving == -28 || *keyMoving == 97){
				*x = *x - 1;
				Delet(*x, *y, *pos, hConsole);
			}
			else if(*keyMoving == -26 || *keyMoving == 119){
				*y = *y - 1;
				Delet(*x, *y, *pos, hConsole);
			}
		}
	}
	cursorOff();
	system("cls");
	Life(*height, *width, matr, matr2, *time, *pos, hConsole);
}
