#include <graphics.h>
#define mx getmaxx()/2
#define my getmaxy()/2
#ifndef __MENU_H_INCLUDED__
#define __MENU_H_INCLUDED__

void pendulum_menu();

void myfunc_menu();

void clip_cs_menu();

void clip_lp_menu();

void clip_poly_menu();

void trans_2d_menu();

void rot_tri_menu();

void curves();

void paratraverse(int r);

void skipping(int x = getmaxx()/2);

void magnifying();

#endif // __MENU_H_INCLUDED__
