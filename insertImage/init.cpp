#include "init.h"

bool init(){
    bool check=true;
    if(SDL_Init(SDL_INIT_VIDEO)<0)
    {
        cout<<" error init "<<endl<<SDL_GetError();
        check=false;
    }
    else{
        window=SDL_CreateWindow("SDL_image",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,screenWidth,screenHeight,SDL_WINDOW_SHOWN);
        if(window==NULL)
        {
            cout<<" create window error "<<endl<<SDL_GetError();
            check=false;
        }
        else{
            screen_surface=SDL_GetWindowSurface(window);
        }
    }
    return check;
}

bool loadMedia()
{
    bool check=true;
    screen_image=SDL_LoadBMP("D:/anh/anh/testsdl.bmp");
    if(screen_image==NULL){
        cout<<"insert image error "<<SDL_GetError();
        check=false;
    }
    return check;
}

void close(){
    SDL_FreeSurface(screen_image);
    screen_image=NULL;
    SDL_DestroyWindow(window);
    window=NULL;
    SDL_Quit();
}

