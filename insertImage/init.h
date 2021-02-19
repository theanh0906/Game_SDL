#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#pragma one

using namespace std;

const int screenWidth=800;
const int screenHeight=500;


SDL_Window* window=NULL;
SDL_Surface* screen_surface=NULL;
SDL_Surface* screen_image=NULL;

bool init();
bool loadMedia();
void close();
