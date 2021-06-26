#ifndef HANDLE_H_INCLUDED
#define HANDLE_H_INCLUDED

#include "buttons.h"
#include "texture.h"
#include "InitClose.h"
#include "loadmedia.h"
#include "rendermedia.h"
#include "navigate.h"
#include "rendersound.h"
#include "rendercharacters.h"

inline void handle( int image_num )
{
    if( image_num == 3 )//..handle buttons on menu page
    {
        if( (!call_renderMedia( 2 )) && (!call_renderMedia( 3 )) )
        {
            for( int i = 0; i < 4; ++i )
            {
                checkk = gButtonMenu[ i ].handleEvent( &e );
                //printf("checkk = %d\n",checkk);
                if( checkk == 2 )  //means a button on menu was pressed
                {
                    button_number = pressedButton( image_number ); //unless button_number is zero, it gives position (button no) of mouse click. when zero, it implies quit
                    printf("button number %d was pressed on Menu Page \n", button_number);
                    image_number = clic2view( image_number, button_number );
                }
            }
        }
    }
    else if( image_num == 10 )//..handle buttons on Choose Char page
    {
        if(  ( !call_renderMedia( 10 ) )  &&  ( !call_renderMedia( 11 ) )   )//........Choose Char page and buttons
        {
            for( int i = 0; i < 4; ++i )
            {
                checkk = gButtonChar[ i ].handleEvent( &e );

                if( checkk == 2 ) // means a character was pressed
                {
                    char_num = pressedButton( image_number );
                    printf("Charcter Number : %d \n",char_num);
                    image_number = clic2view( image_number, char_num );
                }
            }

        }
    }
    else if( (image_num == 12) || (image_num == 24) || (image_num == 27) || (image_num == 30) || (image_num == 33) || (image_num == 36) || (image_num == 39) || (image_num == 46 )  )//.. any level invite
    {
        if( image_num == 39 )//..LEVEL 7 invite
        {
            SDL_Delay( 3000 );
            image_number = clic2view( image_number, char_num );
            startTime =  SDL_GetTicks();
            printf( "start time = %lu\n", (unsigned long)startTime );

        }
        else if(   !call_renderMedia( 8 )    )
        {
            checkk = gButtonCorner2[ 0 ].handleEvent( &e );

            if( checkk == 2 ) // means GO! button was pressed
            {
                if( image_number == 46 )
                {
                    image_number = 13;//...Quiz 1
                }
                else
                {
                    image_number = clic2view( image_number, char_num );
                    startTime =  SDL_GetTicks();
                    printf( "start time = %lu\n", (unsigned long)startTime );
                }
            }
        }
    }
    else if( image_num == 20 )//..any level
    {
        render_Character( 20, char_num );
        if(   !call_renderMedia( image_number )  )//Handle button events for the Level
        {
            endTime =  SDL_GetTicks() - startTime;
            if ( endTime < 60000 )
            {
                printf( "time = %lu\n", (unsigned long)endTime /1000 );
            }
            else
            {
                image_number = Time_Up();
            }
            button_level_total = Button_Level_Total( image_number );
            for( int i = 0; i < button_level_total; ++i )
            {
                checkk = level_button_check( image_number, i );
                //checkk = gButtons[ i ].handleEvent( &e );
                if( checkk == 2 )  //means a seat was pressed
                {
                    current_level = image_number;
                    printf( "button was pressed on Level \n" );
                    button_number = pressedButton( image_number );//.....will return 1 if safe seat, 2 if unsafe seat
                    printf( "correctness on level = %d\n",button_number );
                    image_number = clic2view( 20, button_number );
                }
            }
        }
    }
    else if( image_num == 23 )
    {
        score = ( 65000 - endTime)/100;
        total_score = total_score + score;
        //Set text to be rendered
        timeText.str( "" );
        timeText << "Time taken : " << endTime/1000 << " seconds             Score : " << score ;

        //Render text
        if( !gTimeTextTexture.loadFromRenderedText( timeText.str().c_str(), textColor ) )
        {
            printf( "Unable to render time texture!\n" );
        }

        //Render current frame
        gTimeTextTexture.render( ( SCREEN_WIDTH - gTimeTextTexture.getWidth() ) / 2, ( SCREEN_HEIGHT - gTimeTextTexture.getHeight() ) / 2 );

        //Update screen
        SDL_RenderPresent( gRenderer );
        music_render( 23 );
        printf("current level = %d\n",current_level);
        image_number = next_level_invite( current_level );
        image_number = clic2view( 100, image_number );//.... 100 signifies load get ready for next level and char sprites, image_number tells which level is next.
    }
    else if( image_num == 13 )
    {
        if( ( !call_renderMedia( image_number ) )   &&  ( !call_renderMedia( 19 ) ) )//....Quiz and Quiz buttons
        {
            for( int i = 0; i < 4; ++i )
            {
                checkk = gButtonQuiz[ i ].handleEvent( &e );
                if( checkk == 2 ) // means an answer was pressed
                {
                    printf( "Check Quiz = %d\n", pressedButton( image_number ) );
                    image_number = clic2view( image_number, pressedButton( image_number ) );
                    printf("Image Number = %d\n", image_number);
                }
            }
        }
    }
    else if( image_num == 2 )
    {
        checkk = 1; button_number = 1; char_num = 0; current_level = 0; button_level_total = 0; score = 0;
        if( !call_renderMedia( image_number ) )
        {
            image_number++;
        }
    }
}

#endif // HANDLE_H_INCLUDED
