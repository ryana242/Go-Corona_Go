#ifndef RENDERCHARACTERS_H_INCLUDED
#define RENDERCHARACTERS_H_INCLUDED

#include "buttons.h"
#include "texture.h"
#include "InitClose.h"
#include "loadmedia.h"
#include "rendermedia.h"
#include "navigate.h"

inline void render_Character( int image_num, int char_num )
{
    if( image_num == 20 )//.....any level
    {
        if( char_num == 1 )//....RASHA
        {
            gSpriteSheetTexture.render( 0, 275, &gSpriteClips[ 3 ] );
        }
        else if( char_num == 2 )//....NEHA
        {
             gSpriteSheetTexture.render( 0, 275, &gSpriteClips[ 4 ] );
        }
        else if( char_num == 3 )//....MRIDUL
        {
            gSpriteSheetTexture.render( 0, 275, &gSpriteClips[ 5 ] );
        }
        else if( char_num == 4 )//....BRISHTI
        {
            gSpriteSheetTexture.render( 0, 275, &gSpriteClips[ 6 ] );
        }
        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 12 )//...any level invite
    {
        if( char_num == 1 )//....RASHA
        {
            gSpriteSheetTexture.render( 690, 325, &gSpriteClips[ 3 ] );
        }
        else if( char_num == 2 )//....NEHA
        {
             gSpriteSheetTexture.render( 690, 325, &gSpriteClips[ 4 ] );
        }
        else if( char_num == 3 )//....MRIDUL
        {
            gSpriteSheetTexture.render( 690, 325, &gSpriteClips[ 5 ] );
        }
        else if( char_num == 4 )//....BRISHTI
        {
            gSpriteSheetTexture.render( 690, 325, &gSpriteClips[ 6 ] );
        }
        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 10 )//...level fail, ready for quiz
    {
        if( char_num == 1 )//....RASHA
        {
            gSpriteSheetTexture.render( 673, 210, &gSpriteClips[ 3 ] );
        }
        else if( char_num == 2 )//....NEHA
        {
                gSpriteSheetTexture.render( 673, 210, &gSpriteClips[ 4 ] );
        }
        else if( char_num == 3 )//....MRIDUL
        {
            gSpriteSheetTexture.render( 673, 210, &gSpriteClips[ 5 ] );
        }
        else if( char_num == 4 )//....BRISHTI
        {
            gSpriteSheetTexture.render( 673, 210, &gSpriteClips[ 6 ] );
        }

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 66 )//...Time Up
    {
        if( char_num == 1 )//....RASHA
        {
            gSpriteSheetTexture.render( 673 + 150, 230 - 50, &gSpriteClips[ 3 ] );
        }
        else if( char_num == 2 )//....NEHA
        {
            gSpriteSheetTexture.render( 673 + 150, 230 - 50, &gSpriteClips[ 4 ] );
        }
        else if( char_num == 3 )//....MRIDUL
        {
            gSpriteSheetTexture.render( 673 + 150, 230 - 50, &gSpriteClips[ 5 ] );
        }
        else if( char_num == 4 )//....BRISHTI
        {
            gSpriteSheetTexture.render( 673 + 150, 230 - 50, &gSpriteClips[ 6 ] );
        }
        //Update screen
        SDL_RenderPresent( gRenderer );
        SDL_Delay( 3000 );
    }
}

#endif // RENDERCHARACTERS_H_INCLUDED
