#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <stdio.h>
#include <string>
//#include "buttons.h"
//#include "texture.h"

int pressedButton( int imgnum )
{
    //find position of mouse where the button was pressed
    int x, y;
    int position = -1;
    SDL_GetMouseState( &x, &y );
    //printf("image number: %d,   x: %d, y: %d\n",imgnum,x,y);

    if( imgnum == 3 )// menu page
    {
        if( (y > 381)  &&  (y < 381 + 74) )//hits the start game button.. 74 is BUTTON_HEIGHT
        {
            position = 1; //Button no. for Start Game is 1.
        }
        else if( (y > 381 + 74)  &&  (y < 381 + 74 + 74) )//hits the how to play button
        {
            position = 2;

        }
        else if( (y > 381 + 74 + 74)  &&  (y < 381 + 74 + 74 + 74) )//hits the third button
        {
            printf("Third Button\n");
            position = 3;
        }
        else if( (y > 381 + 74 + 74 + 74)  &&  (y < 381 + 74 + 74 + 74 + 74) )//hits the QUIT button
        {
            position = 0; //zero implies exit
        }
    }
    else if( imgnum == 10 )// Choose Charecter page
    {
        if( (x > 20)  &&  (x < 20 + 138) )//......................... RASHA..
        {
            position = 1;
        }
        else if( (x > 20 + 158 + 10)  &&  (x < 20 + 158 + 10 + 138) )//.................... NEHA..
        {
            position = 2;
        }
        else if( (x > 20 + 158 + 158 + 40)  &&  (x < 20 + 158 + 158 + 40 + 138) )//.................... MRIDUL..
        {
            position = 3;
        }
        else if( (x > 20 + 158 + 158 + 158 + 70)  &&  (x < 20 + 158 + 158 + 158 + 70 + 138) )//.................... BRISHTI..
        {
            position = 4;
        }
    }
    else if( imgnum == 20 )// LEVEL 01
    {
        if(  (x > 100) && (x < 290) && (y < 300) )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }
    else if( imgnum == 26 )// LEVEL 02
    {
        if(  (x > 670) && (x < 860) && (y < 400) )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }
    else if( imgnum == 29 )// LEVEL 03
    {
        if(  (x > 252) && (x < 404) && (y > 500) )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }
    else if( imgnum == 32 )// LEVEL 04
    {
        if(  (x > 556) && (x < 708) && (y < 250) )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }
    else if( imgnum == 35 )// LEVEL 05
    {
        if(  (x > 490) && (x < 620)  )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }
    else if( imgnum == 38 )// LEVEL 06
    {
        if(  (x > 360) && (x < 490) && (y > 550) )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }
    else if( imgnum == 41 )// LEVEL 07
    {
        if(  (x > 223) && (x < 345) && (y > 500) )
        {
            position = 1; //.......................safe seat
        }
        else
        {
            position = 2;//........................unsafe seat
        }
    }

    else if( imgnum == 13 )//...Quiz 1
    {
        printf("x = %d, y = %d \n", x, y);
        if(  (x > 197) && (x < 512) && (y < 560) )
        {
            position = 1; //.......................correct
        }
        else
        {
            position = 2;//........................incorrect
        }
    }
    else if( imgnum == 14 )//...Quiz 2
    {
        if(  (x > 562) && (x < 877) && (y < 560) )
        {
            position = 1; //.......................correct
        }
        else
        {
            position = 2;//........................incorrect
        }
    }
    else if( imgnum == 15 )//...Quiz 3
    {
        if(  (x > 562) && (x < 877) && (y > 576) )
        {
            position = 1; //.......................correct
        }
        else
        {
            position = 2;//........................incorrect
        }
    }
    else if( imgnum == 16 )//...Quiz 4
    {
        if(  (x > 197) && (x < 512) && (y < 560) )
        {
            position = 1; //.......................correct
        }
        else
        {
            position = 2;//........................incorrect
        }
    }
    else if( imgnum == 17 )//...Quiz 5
    {
        if(  (x > 197) && (x < 512) && (y < 560) )
        {
            position = 1; //.......................correct
        }
        else
        {
            position = 2;//........................incorrect
        }
    }

    return position;
}

int next_level_invite( int present_level )
{
    int next_level;
    if( present_level == 20 )
    {
        next_level = 24;
        printf("returning 24 to main\n");
    }
    else
    {
        next_level = present_level + 1;
        printf("returning %d to main\n", present_level + 1);
    }
    return next_level;
}

int next_image_show( int current_image )
{
    int next_image;
    if( current_image == 4 )
    {
        next_image = 6;
    }
    else if( (current_image == 6)  )
    {
        next_image = current_image + 1;
    }
    else if( current_image == 7 )
    {
        next_image = 2;
    }
    else if( current_image == 9 )
    {
        next_image = 48;
    }
    else if( current_image == 48 )
    {
        next_image = 10;
    }
    else if( current_image == 49 )
    {
        next_image = 2;
    }
    return next_image;
}


int Button_Level_Total( int image_num )
{
    if( image_num == 20 )//....indicates buttons on level 1
    {
        return 7;
    }
    if( image_num == 26 )//....indicates buttons on level 2
    {
        return 10;
    }
    if( image_num == 29 )//....indicates buttons on level 3
    {
        return 9;
    }
    if( image_num == 32 )//....indicates buttons on level 4
    {
        return 15;
    }
    if( image_num == 35 )//....indicates buttons on level 5
    {
        return 10;
    }
    if( image_num == 38 )//....indicates buttons on level 6
    {
        return 17;
    }
    if( image_num == 41 )//....indicates buttons on level 7
    {
        return 17;
    }
}
