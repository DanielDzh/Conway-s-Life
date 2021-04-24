#include "header.h"

void Life(int height, int width, int **matr, int **matr2, float time, COORD pos, HANDLE hConsole){
	int numbCheckInfinity = 0, InfinityYesOrNo = 0, helpNumbInfinity = 0, entranceInCheckInfinity = 0, matr3[height][width], countLive, x, y, countChange = 1;
	char keyExit;
	COORD left = {40, 2}, right = {(short)(width+41),(short)(height+3)};

	while(countChange != 0){
		ramka(left, right);
		countChange = 0;
		Sleep(time);
		x = 41; 
		y = 3;
		Delet(x, y, pos, hConsole);

		for(int countHeight = 0; countHeight < height; countHeight++){
			for(int countWidth = 0; countWidth < width; countWidth++){
				countLive = 0;
				if(countHeight == 0 && countWidth == 0){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight == 0 && countWidth == width-1){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight == height-1 && countWidth == 0){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight == height-1 && countWidth == width-1){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight == 0 && countWidth != 0 && countWidth != width-1){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}						
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight != 0 && countHeight != height-1 && countWidth == width-1){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}						
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight == height-1 && countWidth != 0 && countWidth != width-1){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}						
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else if(countHeight != height-1 && countHeight != 0 && countWidth == 0){
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}						
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
					else{
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
				else{
					if(matr[countHeight][countWidth] == 250){
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
							if(countLive == 3){
								matr2[countHeight][countWidth] = 254;
								countChange++;
							}
							else{
								matr2[countHeight][countWidth] = 250;
							}
							printf("%c", matr2[countHeight][countWidth]);
		
					}
					else{
						if(matr[countHeight][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight-1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth+1] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth] == 254){
							countLive++;
						}
						if(matr[countHeight+1][countWidth-1] == 254){
							countLive++;
						}
						if(matr[countHeight][countWidth-1] == 254){
							countLive++;
						}
							if(countLive == 2 || countLive == 3){
								matr2[countHeight][countWidth] = 254;
							}
							else{
								matr2[countHeight][countWidth] = 250;
								countChange++;
							}
							printf("%c", matr2[countHeight][countWidth]);
					}
				}
			}
			printf("\n");
			y++;
			Delet(x, y, pos, hConsole);
		}
	
		for(int countHeight = 0; countHeight < height; countHeight++){
			for(int countWidth = 0; countWidth < width; countWidth++){
				matr[countHeight][countWidth] = matr2[countHeight][countWidth];
			}
		}
		InfinityYesOrNo = 0;

		if(numbCheckInfinity%2 == 0 && entranceInCheckInfinity == 0){
			for(int countHeight = 0; countHeight < height; countHeight++){
				for(int countWidth = 0; countWidth < width; countWidth++){
					matr3[countHeight][countWidth] = matr[countHeight][countWidth];
				}
			}
			helpNumbInfinity = 1;
		}
		else if(helpNumbInfinity == 1 && entranceInCheckInfinity == 0){
			numbCheckInfinity++;
			helpNumbInfinity = 0;
		}
		else if(entranceInCheckInfinity != 1){
			for(int countHeight = 0; countHeight < height; countHeight++){
				for(int countWidth = 0; countWidth < width; countWidth++){
					if(matr3[countHeight][countWidth] != matr[countHeight][countWidth]) InfinityYesOrNo++;
				}
			}
			if(InfinityYesOrNo == 0){
				Delet(2, height+4, pos, hConsole);
				printf("To exit the menu, press ESC");
				Delet(2, height+6, pos, hConsole);
				printf("To continue the endless universe, press ENTER");
				keyExit = getch();
				system("cls");
				if(keyExit == 27){
					countChange = 0;
				}
				else{
					entranceInCheckInfinity = 1;
				}
			}
		}
		numbCheckInfinity++;
		printf("\n");
	}
	Sleep(500);
}
