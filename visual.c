#include "header.h"

void Delet(int x, int y, COORD pos, HANDLE hConsole){
	pos.X = x;									
	pos.Y = y;		
	SetConsoleCursorPosition(hConsole, pos);
}

void cursorOff(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 10;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void cursorOn(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 10;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(consoleHandle, &info);
}

void ramka(COORD left, COORD right){
	SetConsoleCursorPosition(hConsole, left);
	printf("%c", 201);
	
	int x = (right.X-left.X)-1;
	int y = (right.Y-left.Y)-1;
	
	for(int countX = 0; countX < x; countX++){
		printf("%c", 205);
	}
	printf("%c", 187);
	SetConsoleCursorPosition(hConsole, right);
	printf("%c", 188);
	
	for(int countY = 0; countY < y; countY++){
		left.Y += 1;
		SetConsoleCursorPosition(hConsole, left);
		printf("%c", 186);
	}
	left.Y += 1;
	SetConsoleCursorPosition(hConsole, left);
	printf("%c", 200);
	
	for(int countX = 0; countX < x; countX++){
		left.X += 1;
		SetConsoleCursorPosition(hConsole, left);
		printf("%c", 205);
	}
	left.X += 1;
	SetConsoleCursorPosition(hConsole, left);
	
	for(int countY = 0; countY < y; countY++){
		left.Y += -1;
		SetConsoleCursorPosition(hConsole, left);
		printf("%c", 186);
	}
	
	SetConsoleCursorPosition(hConsole, right);
	printf("%c", 188);

}

void MotionButtons(int height, int width){
	Delet(width+62, height/2-4, pos, hConsole);
	SetConsoleTextAttribute(hConsole, FI | FG | BI );
	printf("W");
	Delet(width+52, height/2-2, pos, hConsole);
	SetConsoleTextAttribute(hConsole, FI | FG | BI );
	printf("A");
	Delet(width+54, height/2-2, pos, hConsole);
	SetConsoleTextAttribute(hConsole, BI );
	printf("  Motion buttons  ");
	Delet(width+72, height/2-2, pos, hConsole);
	SetConsoleTextAttribute(hConsole, FI | FG | BI );
	printf("D");
	Delet(width+62, height/2, pos, hConsole);
	SetConsoleTextAttribute(hConsole, FI | FG | BI );
	printf("S");
	Delet(width+47, height/2+3, pos, hConsole);
	SetConsoleTextAttribute(hConsole, BI );
	printf("Make a cage dead or alive click: ");
	Delet(width+60, height/2+5, pos, hConsole);
	SetConsoleTextAttribute(hConsole, FI | FG | BI );
	printf("ENTER");
	Delet(width+52, height/2+7, pos, hConsole);
	SetConsoleTextAttribute(hConsole, BI );
	printf("Start the game click: ");
	Delet(width+61, height/2+9, pos, hConsole);
	SetConsoleTextAttribute(hConsole, FI | FG | BI );
	printf("ESC");
	SetConsoleTextAttribute(hConsole, FI | FG | FR | FB | BI );		
}

void Attribut(int *height, int *width, float *time, COORD *pos, COORD *pos2){
	system("cls");
	pos->X = 39, pos->Y  = 10;
	pos2->X = 70, pos2->Y = 14;
	ramka(*pos, *pos2);			
	Delet(40, 11, *pos, hConsole);
	SetConsoleTextAttribute(hConsole, BR | BI);
	printf("The height of the universe: ");
	SetConsoleTextAttribute(hConsole, BR | BB | BG | BI);
	scanf("%i", &*height);
	Delet(40, 12, *pos, hConsole);
	SetConsoleTextAttribute(hConsole, BB | BG | BI);
	printf("The width of the universe: ");
	SetConsoleTextAttribute(hConsole, BR | BB | BG | BI);
	scanf("%i", &*width);
	Delet(40, 13, *pos, hConsole);
	SetConsoleTextAttribute(hConsole, BG | BI);
	printf("Life speed (in seconds): ");
	SetConsoleTextAttribute(hConsole, BR | BB | BG | BI);
	scanf("%f", &*time);
	system("color 8F");
	system("cls");
}
