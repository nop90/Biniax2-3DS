
#ifndef __OS_3DS_H__
#define __OS_3DS_H__


#include <stdlib.h>
#include <3ds.h>

#define SDL_INIT_VIDEO 1
typedef int Uint32;
typedef u8 Uint8;


int SDL_Init(int flag); //returns 0 on success, -1 on failure 
void SDL_Quit();

int SDL_GetTicks();
void SDL_Delay(int ms);

// stubbed win functions
void SDL_WM_SetCaption(const char* caption,void* p);
void SDL_WM_SetIcon(void* i, void* p);

#define SDL_Event int

#define SDL_QUIT 1<<1
#define SDL_KEYDOWN 1<<2
#define SDL_FINGERDOWN 1<<3
#define SDL_MOUSEBUTTONDOWN KEY_TOUCH

#define SDL_DISABLE 0


int SDL_PollEvent(int event);
int getTouchX();
int getTouchY();

int SDL_GetKeyState(void* p);

int SDL_GetMouseState(int * x, int * y);


#define SDL_DISABLE 0
#define SDL_ENABLE 1
void SDL_ShowCursor(int s);

int getLanguage(void);
void setLanguage(int languageID);


#define SDLK_RETURN	KEY_A
#define SDLK_SPACE	KEY_B
#define SDLK_ESCAPE	KEY_X
#define SDLK_DELETE KEY_Y
#define SDLK_LEFT	KEY_LEFT
#define SDLK_RIGHT	KEY_RIGHT
#define SDLK_UP		KEY_UP
#define SDLK_DOWN	KEY_DOWN


#define SDLK_F1 	KEY_START
#define SDLK_F4 	KEY_SELECT

#define SDLK_CAPSLOCK 0
#define SDLK_PAGEUP 0
#define SDLK_PAGEDOWN 0
#define SDLK_LSHIFT 0
#define SDLK_LCTRL	0
#define SDLK_z		0
#define SDLK_w		0
#define SDLK_s		0
#define SDLK_a		0
#define SDLK_d		0
#define SDLK_x		0
#define SDLK_c		0
#define SDLK_p 		0
#define SDLK_m 		0
#define SDLK_t 		0
#define SDLK_o 		0
#define SDLK_SEMICOLON 0

#define KMOD_ALT 0
#define KMOD_CTRL 0

#define SDLK_0 0
#define SDLK_1 0
#define SDLK_2 0
#define SDLK_3 0
#define SDLK_4 0
#define SDLK_5 0
#define SDLK_6 0
#define SDLK_7 0
#define SDLK_8 0
#define SDLK_9 0

#define SDLK_KP0 0
#define SDLK_KP1 0
#define SDLK_KP2 0
#define SDLK_KP3 0
#define SDLK_KP4 0
#define SDLK_KP5 0
#define SDLK_KP6 0
#define SDLK_KP7 0
#define SDLK_KP8 0
#define SDLK_KP9 0


#endif