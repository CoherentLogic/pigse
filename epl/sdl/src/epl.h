/*
 *  epl.h
 *   Provides defines and function declarations    
 *   for EPL.
 *
 *
 *  Copyright (C) 2011 Coherent Logic Development LLC
 *
 */

/***
  EPL types
***/

#ifdef __SDL_API
typedef Uint8 ECOORD;
typedef char* ESTR;
typedef long ERESULT;
#endif

/***
   EPL errors
***/

#define EPL_NO_VIDEO_INIT 0x01
#define EPL_BAD_VIDEO_MODE 0x02

/***
  EPL messages
***/

/* keyboard events */
#define EPL_KEYDOWN 0x01
#define EPL_KEYUP 0x02
#define EPL_MOUSEDOWN 0x03
#define EPL_MOUSEMOVE 0x04
#define EPL_MOUSEUP 0x05

/* gamepad events */
#define EPL_BUTTONDOWN 0x06
#define EPL_BUTTONUP 0x07
#define EPL_DPADMOVE 0x08

/* joystick events */
#define EPL_JSMOVE 0x09

/***
  EPL functions
***/

extern ERESULT EplInit(ECOORD ScrWidth, ECOORD ScrHeight, ECOORD ScrDepth);
extern void EplError(ESTR ErrMessage);











