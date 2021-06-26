#ifndef NAVIGATE_H_INCLUDED
#define NAVIGATE_H_INCLUDED

#include "buttons.h"
#include "texture.h"
#include "InitClose.h"
#include "loadmedia.h"
#include "rendermedia.h"

inline int clic2view( int image_num, int button_num )
{
    if( image_num == 3 ) //Menu Page input
    {
        if( button_num == 1 ) //Start Game Button
        {
            image_num = 9; // Will load Start Message page
        }
        else if( button_num == 2 ) //How to Play Button
        {
            image_num = 4; // Will load How to play page
        }
        else if( button_num == 3 )//..About Covid-19 button
        {
            image_num = 49; // Will load bout Covid-19 page
        }
        if(  !call_renderMedia( image_num ) )
        {
            //
        }
    }
    else if( image_num == 10 ) //Choose Character Page input
    {
        Char = button_num;
        if( ( !call_renderMedia( 12 ) )  &&  ( !call_renderMedia( 47 ) )  )//..will call Get Ready for Level 01 and load character sprites
        {
            render_Character( 12, button_num );
            image_num = 12;
        }
    }

    else if( image_num == 12 ) //Get Ready for Level 01 done
    {
        if( !call_renderMedia( 18 ) )//.......Calling Level 01
        {
            image_num = 20;
        }
    }
    else if( (image_num == 24) || (image_num == 27) || (image_num == 30) || (image_num == 33) || (image_num == 36) || (image_num == 39) ) //Get Ready for Level 02-07 done
    {
        if( !call_renderMedia( image_num + 1 ) )//.......Calling Level 02-07
        {
            image_num = image_num + 2;//....sending level buttons to main to be called
        }
    }
    else if( image_num == 100 ) //..will call Get Ready for Level 02-07 and load character sprites
    {
        if( ( !call_renderMedia( button_num ) )  &&  ( !call_renderMedia( 47 ) )  )//..will call Get Ready for the Level and load character sprites
        {
            render_Character( 12, Char );
            image_num = button_num;
        }
    }
    else if( image_num == 20 ) //......any Level
    {
        if( button_num == 1 )//.......Correct seat
        {
            if( revival_back_to == 39 )//...indicates last level
            {
                image_num = 44;//..Game Win!
            }
            else
            {
                image_num = 23;//.....level success
            }
        }
        else
        {
            if( quiz == 0 )//....get ready for quiz
            {
                printf("quiz = %d\n", quiz);
                if( !call_renderMedia( 46 ) )
                {
                    render_Character( 10, Char );//..char sprite on get ready for quiz
                    image_num = 46;
                }
            }
            else
            {
                printf("quiz = %d\n", quiz);
                image_num = 22;//....GAME OVER!
            }
        }
        if( (image_num != 46) && (!call_renderMedia( image_num )) )
        {
            if( (image_num == 44) || (image_num == 22) )//... game win or game over
            {
                image_num = 2;//.. menu
            }
        }
    }
    else if( (image_num >=13) && (image_num <=17) )//.....Quiz
    {
        quiz = 1;
        printf("quiz = %d\n", quiz);
        if( button_num == 2 )//.....Incorrect Ans
        {
            image_num = 43;//....quiz fail
            if(  !call_renderMedia( image_num ) )
            {
                if(  !call_renderMedia( 22 ) )//....GAME OVER!
                {
                    image_num = 2;
                }
            }
        }
        else//.....Correct Ans
        {
            if(  !call_renderMedia( 42 ) )//....quiz pass
            {
                if( image_num == 17 )//.. last question pass
                {
                    if(  !call_renderMedia( 45 ) )//....Revival
                    {
                        image_num = revival_back_to;
                    }
                }
                else
                {
                    image_num++;
                }
            }
        }

        if(  (image_num > 20) || (image_num == 12) )
        {
            if(  !call_renderMedia( image_num ) )
            {
                //
            }
        }
    }

    return image_num;
}

inline int Time_Up()
{
    if( !call_renderMedia( 21 ) )
    {
        render_Character( 66, Char );//..char sprite on time up
        printf("Time Up!\n");
        int x = clic2view( 20, 2 );
        return x;
    }
}

#endif // NAVIGATE_H_INCLUDED
