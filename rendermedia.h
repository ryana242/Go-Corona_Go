#ifndef RENDERMEDIA_H_INCLUDED
#define RENDERMEDIA_H_INCLUDED

#include "buttons.h"
#include "texture.h"
#include "InitClose.h"
#include "loadmedia.h"

inline bool call_renderMedia( int image_num )
{
    bool media_render = false;
    if( !renderMedia( image_num ) )
        {
            printf( "Failed to load media on image number %d!\n",image_num );
            media_render = true;
        }
        return media_render;
}

inline bool renderMedia( int image_num )
{
    //Loading success flag
    bool success = true;

    if( image_num == 1 )//.......................loading page
    {
        //printf( "1\n" );
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture1, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        //Wait two seconds
        SDL_Delay( 2000 );
    }
    else if( image_num == 2 )//.......................menu page
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture2, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 3 )//.......................buttons on menu page
    {
        BUTTON_WIDTH = 187;
        BUTTON_HEIGHT = 74;
        render_buttons( 3, 4 );
    }
    else if ( image_num == 4 )//.......................How to Play Page 1
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture4, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if ( image_num == 6 )//.......................How to Play Page 2
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture6, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if ( image_num == 7 )//.......................How to Play Page 3
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture7, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if ( image_num == 5 )//.......................corner button 1
    {
        BUTTON_WIDTH = 187;
        BUTTON_HEIGHT = 74;
        render_buttons( 5, 1 );
    }
    else if ( image_num == 8 )//.......................corner button 2
    {
        BUTTON_WIDTH = 187;
        BUTTON_HEIGHT = 74;
        render_buttons( 8, 1 );
    }
    else if ( image_num == 9 )//.......................Start Message Page
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture9, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if ( image_num == 10 )//.......................Choose Character Page
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture10, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if ( image_num == 11 )//.......................buttons on Choose Character Page
    {
        BUTTON_WIDTH = 145;
        BUTTON_HEIGHT = 327;
        render_buttons( 11, 4 );
    }
    else if( image_num == 12 )//.......................Get Ready for Level 1
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture12, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        revival_back_to = image_num;
    }
    else if( image_num == 13 )//.......................Quiz 1
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture13, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 14 )//.......................Quiz 2
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture14, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 15 )//.......................Quiz 3
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture15, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 16 )//.......................Quiz 4
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture16, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 17 )//.......................Quiz 5
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture17, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 18 )//.......................Level 1
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture18, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 19 )//.......................buttons on quiz
    {
        BUTTON_WIDTH = 315;
        BUTTON_HEIGHT = 103;
        render_buttons( 19, 4 );
    }
    else if( image_num == 20 )//..................................buttons on Level 1
    {
        BUTTON_WIDTH = 190;
        BUTTON_HEIGHT = 200;
        render_buttons( 20, 7 );
    }
    else if( image_num == 21 )//..................................TIME UP!!!!!!!
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture21, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 22 )//..................................GAME OVER!!!!!!!
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture22, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        printf( "Final Score = %d\n", total_score/10 );

        if( revival_back_to != 12 )
        {
            //Set text to be rendered
            scoreText.str( "" );
            scoreText << "TOTAL SCORE : " << total_score ;
            //Render text
            if( !gScoreTextTexture.loadFromRenderedText( scoreText.str().c_str(), ScoretextColor ) )
            {
                printf( "Unable to render time texture!\n" );
            }

            //Render current frame
            gScoreTextTexture.render( ( SCREEN_WIDTH - gScoreTextTexture.getWidth() ) / 2, ( SCREEN_HEIGHT - gScoreTextTexture.getHeight() ) / 2 );

            //Update screen
            SDL_RenderPresent( gRenderer );
        }
        music_render( 22 );
        quiz = 0; Char = 0; check = 0; revival_back_to = 0;  total_score = 0;
    }
    else if( image_num == 23 )//...........................Level success
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture23, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        //Open the font
        gFont = TTF_OpenFont( "OpenSans-BoldItalic.ttf", 28 );
        if( gFont == NULL )
        {
            printf( "Failed to load font! SDL_ttf Error: %s\n", TTF_GetError() );
            success = false;
        }
    }
    else if( image_num == 24 )//.......................Get Ready for Level 02
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture24, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        revival_back_to = image_num;
    }
    else if( image_num == 25 )//.......................Level 02
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture25, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 26 )//.......................buttons on Level 02
    {
        BUTTON_WIDTH = 190;
        BUTTON_HEIGHT = 150;
        render_buttons( 26, 10 );
    }
    else if( image_num == 27 )//.......................Get Ready for Level 03
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture27, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        revival_back_to = image_num;
    }
    else if( image_num == 28 )//.......................Level 03
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture28, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 29 )//.......................buttons on Level 03
    {
        BUTTON_WIDTH = 152;
        BUTTON_HEIGHT = 200;
        render_buttons( 29, 9 );
    }
    else if( image_num == 30 )//.......................Get Ready for Level 04
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture30, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        revival_back_to = image_num;
    }
    else if( image_num == 31 )//.......................Level 04
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture31, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 32 )//.......................buttons on Level 04
    {
        BUTTON_WIDTH = 152;
        BUTTON_HEIGHT = 150;
        render_buttons( 32, 15 );
    }
    else if( image_num == 33 )//.......................Get Ready for Level 05
    {
        revival_back_to = image_num;
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture33, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 34 )//.......................Level 05
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture34, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 35 )//.......................buttons on Level 05
    {
        BUTTON_WIDTH = 130;
        BUTTON_HEIGHT = 200;

        render_buttons( 35, 10 );
    }
    else if( image_num == 36 )//.......................Get Ready for Level 06
    {
        revival_back_to = image_num;
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture36, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 37 )//.......................Level 06
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture37, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 38 )//.......................buttons on Level 06
    {
        BUTTON_WIDTH = 130;
        BUTTON_HEIGHT = 150;
        render_buttons( 38, 17 );
    }
    else if( image_num == 39 )//.......................Get Ready for Level 07
    {
        revival_back_to = image_num;
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture39, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 40 )//.......................Level 07
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture40, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 41 )//.......................buttons on Level 07
    {
        BUTTON_WIDTH = 122;
        BUTTON_HEIGHT = 200;

        render_buttons( 41, 17 );
    }
    else if( image_num == 42 )//.......................Quiz Pass
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture42, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        SDL_Delay( 2000 );
    }
    else if( image_num == 43 )//.......................Quiz Fail
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture43, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        SDL_Delay( 2000 );
    }
    else if( image_num == 44 )//.......................GAME WIN!
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture44, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        printf( "Final Score = %d", total_score/10 );
        //Set text to be rendered
        scoreText.str( "" );
        scoreText << "TOTAL SCORE : " << total_score ;
        SDL_Color ScoretextColor = { 0, 10, 0, 255 };//..setting text color to black

        //Render text
        if( !gScoreTextTexture.loadFromRenderedText( scoreText.str().c_str(), ScoretextColor ) )
        {
            printf( "Unable to render time texture!\n" );
        }

        //Render current frame
        gScoreTextTexture.render( ( SCREEN_WIDTH - gScoreTextTexture.getWidth() ) / 2, ( (SCREEN_HEIGHT - gScoreTextTexture.getHeight() ) / 2) - 40 );

        //Update screen
        SDL_RenderPresent( gRenderer );
        music_render( 44 );
        quiz = 0; Char = 0; check = 0; revival_back_to = 0;  total_score = 0;
    }
    else if( image_num == 45 )//.......................Revival after passing all quiz
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture45, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
        SDL_Delay( 6000 );
    }
    else if( image_num == 46 )//.......................Level fail, get ready for quiz
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture46, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 47 )//.......................Character Sprites
    {
        if( !gSpriteSheetTexture.loadFromFile( "Images/CharSprite.png" ) )
        {
            printf( "Failed to load sprite sheet texture!\n" );
            success = false;
        }
         else
        {
            //Set sprites
            for( int i = 3; i < 7; ++i )
            {
                gSpriteClips[ i ].x = 100*(i-3);
                gSpriteClips[ i ].y = 0;
                gSpriteClips[ i ].w = 100;
                gSpriteClips[ i ].h = 385;
            }
        }
    }
    else if( image_num == 48 )//.......................short rules
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture48, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == 49 )//.......................about covid
    {
        //Clear screen
        SDL_RenderClear( gRenderer );

        //Render texture to screen
        SDL_RenderCopy( gRenderer, gTexture49, NULL, NULL );

        //Update screen
        SDL_RenderPresent( gRenderer );
    }
    else if( image_num == -10 )//.......................music
    {
        //Load music
        gMusic = Mix_LoadMUS( "music/intense_music.wav" );
        if( gMusic == NULL )
        {
            printf( "Failed to load intense music! SDL_mixer Error: %s\n", Mix_GetError() );
            success = false;
        }
    }
    else if( image_num == -11 )//......sound effect level success
    {
        gSuccess = Mix_LoadWAV( "music/success.wav" );
        if( gSuccess == NULL )
        {
            printf( "Failed to load success sound effect! SDL_mixer Error: %s\n", Mix_GetError() );
            success = false;
        }
    }
    else if( image_num == -12 )//......sound effect Game Win
    {
        gGameWin = Mix_LoadWAV( "music/game_win.wav" );
        if( gGameWin == NULL )
        {
            printf( "Failed to load game win sound effect! SDL_mixer Error: %s\n", Mix_GetError() );
            success = false;
        }
    }
    else if( image_num == -13 )//......sound effect Game Over
    {
        gGameOver = Mix_LoadWAV( "music/game_over2.wav" );
        printf("loaded music\n");
        if( gGameOver == NULL )
        {
            printf( "Failed to load game over sound effect! SDL_mixer Error: %s\n", Mix_GetError() );
            success = false;
        }
    }

    return success;
}

#endif // RENDERMEDIA_H_INCLUDED
