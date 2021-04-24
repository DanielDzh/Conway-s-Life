#include "header.h"

void zeroing(COORD *pos, COORD *pos2, char *keyChoice, char *keyMoving, char *keyMenu){
		pos->X = 0, pos2->Y = 0;
		pos->Y = 0, pos2->X = 0;
		*keyChoice = 0, *keyMoving = 0, *keyMenu = 0;
}
