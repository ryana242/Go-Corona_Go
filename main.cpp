#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include "buttons.h"
#include "texture.h"
#include "InitClose.h"
#include "loadmedia.h"
#include "rendermedia.h"
#include "navigate.h"
#include "rendersound.h"
#include "rendercharacters.h"
#include "handle.h"

//declaring functions
//Starts up SDL and creates window
bool init();
bool call_init();

//Loads media
bool loadMedia();

//Frees media and shuts down SDL
void closing();

int main( int argc, char* args[] )
{
    if( !call_init() ) //call init gives false bool means init was successful
    {
        if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else if( !call_renderMedia( image_number ) )
        {
            bool quit = false; ////Set flag for main loop and initially set to false

			start_music();

            while( !quit && (button_number !=0) )//the main loop keeps running until application quits
            {
                while( SDL_PollEvent( &e ) != 0 ) //Handle events on queue
                {
                    if( e.type == SDL_QUIT )//User requests quit
                    {
                        quit = true;
                    }

                    control_music(); //..Start/Stop game background music with key press

                    if( (image_number == 3) || (image_number == 10) || (image_number == 12) || (image_number == 23) || (image_number == 24) || (image_number == 27) || (image_number == 30) || (image_number == 33) || (image_number == 36) || (image_number == 39) || (image_number == 46) )//menu page, choose char page, level invites
                    {
                        handle( image_number );
                    }

                    if( (image_number == 4) || (image_number == 6) || (image_number == 7) || (image_number == 9) || (image_number == 48) || (image_number == 49) )//Handle button events for pages with single buttons
                    {
                        image_number = button_module( image_number, next_image_show( image_number ) );
                    }

                    if( (image_number == 20) || (image_number == 26) || (image_number == 29) || (image_number == 32) || (image_number == 35) || (image_number == 38) || (image_number == 41) )//...Handle buttons for levels
                    {
                        handle( 20 );
                    }

                    if( (image_number >= 13) && (image_number <= 17) )//......Quiz
                    {
                        handle( 13 );
                    }

                }
                while( image_number <= 2 )
                {
                    handle( 2 );
                }
            }
        }
    }
    closing();//close SDL
    return 0;
}
