#include "init.h"



int main(int argc,char* argv[])
{
    if(!init())
    {
        cout<<"error"<<endl;
    }
    else
    {
        if(!loadMedia())
        {
            cout<<"error"<<endl;
        }
        else
        {
            bool quit=false;
            SDL_Event ev;
            while(!quit){
                /*vong lap dua cac lenh vao,neu bo di thi se khong them duoc
                lenh nao( vi du phim di chuyen)*/
                while(SDL_PollEvent(&ev)!=0){
                    if(ev.type==SDL_QUIT)
                    {
                        quit=true;
                    }
                }

                SDL_BlitSurface(screen_image,NULL,screen_surface,NULL);
                SDL_UpdateWindowSurface(window);


            }
        }
    }
    close();
    return 0;
}
