#include <stdio.h>
#include <stdlib.h>
#include "inc.h"
#include "os_3ds.h"

unsigned int step;
unsigned int timer;

BNX_BOOL checkMatch(BNX_UINT8 p, BNX_UINT8 e)
{
	return (e == pairLeft( p )) || (e == pairRight( p ));
}


int AISearch(BNX_GAME *game, BNX_INP *keys)
{

// this is a very basic algorithm
	BNX_UINT8 x,y,e;
	x=game->player[1].x;
	y=game->player[1].y;
	e=game->player[1].e;
	if (y<6 && checkMatch(game->grid[x][y+1], e)) return 0;
	if (x>0 && checkMatch(game->grid[x-1][y], e)) return 2;
	if (x<4 && checkMatch(game->grid[x+1][y], e)) return 3;
	if (x>0 && checkMatch(game->grid[x][y-1], e)) return 1;
	return rand() % 4;
}

void aiMove( BNX_GAME *game, BNX_INP *keys )
{

	int i;
	
	keys->keyAltDown	= BNX_FALSE;
	keys->keyAltUp		= BNX_FALSE;
	keys->keyAltLeft	= BNX_FALSE;
	keys->keyAltRight	= BNX_FALSE;
	
	if (game->lines+1>step) 
	{
		timer = game->scroll;
		step = game->lines+1;
	}

	if(timer-5 > game->scroll )
	{
		timer = game->scroll;
		i = AISearch(game, keys);
		switch(i) {

			case 0  :
				keys->keyAltUp = BNX_TRUE;;
				break; 
			case 1  :
				keys->keyAltDown = BNX_TRUE;;
				break; 
			case 2  :
				keys->keyAltLeft = BNX_TRUE;;
				break; 
			case 3  :
				keys->keyAltRight = BNX_TRUE;;
				break; 
			default : /* Optional */
				break; 
		}	
	}	
}

void initAI(void)
{
	/* Intializes random number generator */
	srand((unsigned int) SDL_GetTicks());
	step = 0;
	timer=0;
}



