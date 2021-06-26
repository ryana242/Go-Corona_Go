#ifndef INITCLOSE_H_INCLUDED
#define INITCLOSE_H_INCLUDED

//#pragma once
#include "texture.h"
#include "buttons.h"

inline bool init()
{
    //Initialization flag
    bool success = true;

    //Initialize SDL
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Set texture filtering to linear
		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
		{
			printf( "Warning: Linear texture filtering not enabled!" );
		}

        //Create window
        gWindow = SDL_CreateWindow( "Go Corona Go!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if( gWindow == NULL )
        {
            printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Create renderer for window
			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
			if( gRenderer == NULL )
			{
				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
			}
			else
            {
                //Initialize renderer color
				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

                //Initialize PNG loading by using IMG_INIT_PNG
                int imgFlags = IMG_INIT_PNG;     //here, write IMG_INIT_JPG instead of IMG_INIT_PNG to load jpg images. bmp images will load regardless
                if( !( IMG_Init( imgFlags ) & imgFlags ) )
                {
                    printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
                    success = false;
                }

                //Initialize SDL_ttf
				if( TTF_Init() == -1 )
				{
					printf( "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError() );
					success = false;
				}
				//Initialize SDL_mixer
				if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
				{
					printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
					success = false;
				}
            }
        }
    }

    return success;
}

inline bool call_init()
{
    bool fail = false;
    if( !init() )  //Calls init function. It returns bool value. This checks if bool value is false
    {
        printf( "Failed to initialize!\n" );
        fail = true;
    }
    return fail;
}

inline void closing()
{
    //Free loaded image
	SDL_DestroyTexture( gTexture1 );
	gTexture1 = NULL;
	SDL_DestroyTexture( gTexture2 );
	gTexture2 = NULL;
	SDL_DestroyTexture( gTexture3 );
	gTexture3 = NULL;
	SDL_DestroyTexture( gTexture4 );
	gTexture4 = NULL;
	SDL_DestroyTexture( gTexture5 );
	gTexture5 = NULL;
	SDL_DestroyTexture( gTexture6 );
	gTexture6 = NULL;
	SDL_DestroyTexture( gTexture7 );
	gTexture7 = NULL;
	SDL_DestroyTexture( gTexture8 );
	gTexture8 = NULL;
	SDL_DestroyTexture( gTexture9 );
	gTexture9 = NULL;
	SDL_DestroyTexture( gTexture10 );
	gTexture10 = NULL;
	SDL_DestroyTexture( gTexture11 );
	gTexture11 = NULL;
	SDL_DestroyTexture( gTexture12 );
	gTexture12 = NULL;
	SDL_DestroyTexture( gTexture13 );
	gTexture13 = NULL;
	SDL_DestroyTexture( gTexture14 );
	gTexture14 = NULL;
	SDL_DestroyTexture( gTexture15 );
	gTexture15 = NULL;
	SDL_DestroyTexture( gTexture16 );
	gTexture16 = NULL;
	SDL_DestroyTexture( gTexture17 );
	gTexture17 = NULL;
	SDL_DestroyTexture( gTexture18 );
	gTexture18 = NULL;
	SDL_DestroyTexture( gTexture19 );
	gTexture19 = NULL;
	SDL_DestroyTexture( gTexture20 );
	gTexture20 = NULL;
	SDL_DestroyTexture( gTexture21 );
	gTexture21 = NULL;
	SDL_DestroyTexture( gTexture22 );
	gTexture22 = NULL;
	SDL_DestroyTexture( gTexture23 );
	gTexture23 = NULL;
	SDL_DestroyTexture( gTexture24 );
	gTexture24 = NULL;
	SDL_DestroyTexture( gTexture25 );
	gTexture25 = NULL;
	SDL_DestroyTexture( gTexture26 );
	gTexture26 = NULL;
	SDL_DestroyTexture( gTexture27 );
	gTexture27 = NULL;
	SDL_DestroyTexture( gTexture28 );
	gTexture28 = NULL;
	SDL_DestroyTexture( gTexture29 );
	gTexture29 = NULL;
	SDL_DestroyTexture( gTexture30 );
	gTexture30 = NULL;
	SDL_DestroyTexture( gTexture31 );
	gTexture31 = NULL;
	SDL_DestroyTexture( gTexture32 );
	gTexture32 = NULL;
	SDL_DestroyTexture( gTexture33 );
	gTexture33 = NULL;
	SDL_DestroyTexture( gTexture34 );
	gTexture34 = NULL;
	SDL_DestroyTexture( gTexture35 );
	gTexture35 = NULL;
	SDL_DestroyTexture( gTexture36 );
	gTexture36 = NULL;
	SDL_DestroyTexture( gTexture37 );
	gTexture37 = NULL;
	SDL_DestroyTexture( gTexture38 );
	gTexture38 = NULL;
	SDL_DestroyTexture( gTexture39 );
	gTexture39 = NULL;
	SDL_DestroyTexture( gTexture40 );
	gTexture40 = NULL;
	SDL_DestroyTexture( gTexture41 );
	gTexture41 = NULL;
	SDL_DestroyTexture( gTexture42 );
	gTexture42 = NULL;
	SDL_DestroyTexture( gTexture43 );
	gTexture43 = NULL;
	SDL_DestroyTexture( gTexture44 );
	gTexture44 = NULL;
	SDL_DestroyTexture( gTexture45 );
	gTexture45 = NULL;
	SDL_DestroyTexture( gTexture46 );
	gTexture46 = NULL;
	SDL_DestroyTexture( gTexture47 );
	gTexture47 = NULL;
	SDL_DestroyTexture( gTexture48 );
	gTexture48 = NULL;
	SDL_DestroyTexture( gTexture49 );
	gTexture49 = NULL;

	//Free loaded button images
	gButtonSpriteSheetTexture1.free();
	gButtonSpriteSheetTexture2.free();
	gButtonSpriteSheetTexture3.free();
	gButtonSpriteSheetTexture4.free();
	gButtonSpriteSheetTexture5.free();
	gButtonSpriteSheetTexture6.free();
	gButtonSpriteSheetTexture7.free();
	gButtonSpriteSheetTexture8.free();
	gButtonSpriteSheetTexture9.free();
	gButtonSpriteSheetTexture10.free();
	gButtonSpriteSheetTexture11.free();
	gButtonSpriteSheetTexture12.free();
	gSpriteSheetTexture.free(); //..Characters

	//Free loaded text images
	gTimeTextTexture.free();
	gScoreTextTexture.free();

	//Free global font
	TTF_CloseFont( gFont );
	gFont = NULL;

	//Free the sound effects
	Mix_FreeChunk( gSuccess );
	Mix_FreeChunk( gGameWin );
	Mix_FreeChunk( gGameOver );
	gSuccess = NULL;
	gGameWin = NULL;
	gGameOver = NULL;

	//Free the music
	Mix_FreeMusic( gMusic );
	gMusic = NULL;

	//Destroy window
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;

	//Quit SDL subsystems
	TTF_Quit();
	IMG_Quit();
	Mix_Quit();
	SDL_Quit();
}

#endif // INITCLOSE_H_INCLUDED
