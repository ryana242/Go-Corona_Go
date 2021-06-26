#ifndef LOADMEDIA_H_INCLUDED
#define LOADMEDIA_H_INCLUDED

//#pragma once
#include "texture.h"
#include "buttons.h"
#include "InitClose.h"

inline bool loadMedia()
{
    printf("entered\n");
    //Loading success flag
    bool success = true;

    gTexture1 = loadTexture( "Images/Start.bmp" );
    if( gTexture1 == NULL )
    {
        printf( "Failed to load texture1 image!\n" );
        success = false;
    }
    gTexture2 = loadTexture( "Images/menu.bmp" );
    if( gTexture2 == NULL )
    {
        printf( "Failed to load texture2 image!\n" );
        success = false;
    }
    gTexture4 = loadTexture( "Images/Instruction1.bmp" );
    if( gTexture4 == NULL )
    {
        printf( "Failed to load texture4 image!\n" );
        success = false;
    }
    gTexture6 = loadTexture( "Images/Instruction2.bmp" );
    if( gTexture6 == NULL )
    {
        printf( "Failed to load texture6 image!\n" );
        success = false;
    }
    gTexture7 = loadTexture( "Images/Instruction3.bmp" );
    if( gTexture7 == NULL )
    {
        printf( "Failed to load texture7 image!\n" );
        success = false;
    }
    gTexture9 = loadTexture( "Images/Startmessage.bmp" );
    if( gTexture9 == NULL )
    {
        printf( "Failed to load texture9 image!\n" );
        success = false;
    }
    gTexture10 = loadTexture( "Images/ChooseCharacter.bmp" );
    if( gTexture10 == NULL )
    {
        printf( "Failed to load texture10 image!\n" );
        success = false;
    }
    gTexture12 = loadTexture( "Images/Invite/L01.bmp" );
    if( gTexture12 == NULL )
    {
        printf( "Failed to load texture12 image!\n" );
        success = false;
    }
    gTexture13 = loadTexture( "Images/Quiz/quiz1.bmp" );
    if( gTexture13 == NULL )
    {
        printf( "Failed to load texture13 image!\n" );
        success = false;
    }
    gTexture14 = loadTexture( "Images/Quiz/quiz2.bmp" );
    if( gTexture14 == NULL )
    {
        printf( "Failed to load texture14 image!\n" );
        success = false;
    }
    gTexture15 = loadTexture( "Images/Quiz/quiz3.bmp" );
    if( gTexture15 == NULL )
    {
        printf( "Failed to load texture15 image!\n" );
        success = false;
    }
    gTexture16 = loadTexture( "Images/Quiz/quiz4.bmp" );
    if( gTexture16 == NULL )
    {
        printf( "Failed to load texture16 image!\n" );
        success = false;
    }
    gTexture17 = loadTexture( "Images/Quiz/quiz5.bmp" );
    if( gTexture17 == NULL )
    {
        printf( "Failed to load texture17 image!\n" );
        success = false;
    }
    gTexture18 = loadTexture( "Images/Levels/Level01.bmp" );
    if( gTexture18 == NULL )
    {
        printf( "Failed to load texture18 image!\n" );
        success = false;
    }
    gTexture21 = loadTexture( "Images/TimeUp.bmp" );
    if( gTexture21 == NULL )
    {
        printf( "Failed to load texture21 image!\n" );
        success = false;
    }
    gTexture22 = loadTexture( "Images/GameOver.bmp" );
    if( gTexture22 == NULL )
    {
        printf( "Failed to load texture22 image!\n" );
        success = false;
    }
    gTexture23 = loadTexture( "Images/success.bmp" );
    if( gTexture23 == NULL )
    {
        printf( "Failed to load texture23 image!\n" );
        success = false;
    }
    gTexture24 = loadTexture( "Images/Invite/L02.bmp" );
    if( gTexture24 == NULL )
    {
        printf( "Failed to load texture24 image!\n" );
        success = false;
    }
    gTexture25 = loadTexture( "Images/Levels/Level02.bmp" );
    if( gTexture25 == NULL )
    {
        printf( "Failed to load texture25 image!\n" );
        success = false;
    }
    gTexture27 = loadTexture( "Images/Invite/L03.bmp" );
    if( gTexture27 == NULL )
    {
        printf( "Failed to load texture27 image!\n" );
        success = false;
    }
    gTexture28 = loadTexture( "Images/Levels/Level03.bmp" );
    if( gTexture28 == NULL )
    {
        printf( "Failed to load texture28 image!\n" );
        success = false;
    }
    gTexture30 = loadTexture( "Images/Invite/L04.bmp" );
    if( gTexture30 == NULL )
    {
        printf( "Failed to load texture30 image!\n" );
        success = false;
    }
    gTexture31 = loadTexture( "Images/Levels/Level04.bmp" );
    if( gTexture31 == NULL )
    {
        printf( "Failed to load texture31 image!\n" );
        success = false;
    }
    gTexture33 = loadTexture( "Images/Invite/L05.bmp" );
    if( gTexture33 == NULL )
    {
        printf( "Failed to load texture33 image!\n" );
        success = false;
    }
    gTexture34 = loadTexture( "Images/Levels/Level05.bmp" );
    if( gTexture34 == NULL )
    {
        printf( "Failed to load texture34 image!\n" );
        success = false;
    }
    gTexture36 = loadTexture( "Images/Invite/L06.bmp" );
    if( gTexture36 == NULL )
    {
        printf( "Failed to load texture36 image!\n" );
        success = false;
    }
    gTexture37 = loadTexture( "Images/Levels/Level06.bmp" );
    if( gTexture37 == NULL )
    {
        printf( "Failed to load texture37 image!\n" );
        success = false;
    }
    gTexture39 = loadTexture( "Images/Invite/L07.bmp" );
    if( gTexture39 == NULL )
    {
        printf( "Failed to load texture39 image!\n" );
        success = false;
    }
    gTexture40 = loadTexture( "Images/Levels/Level07.bmp" );
    if( gTexture40 == NULL )
    {
        printf( "Failed to load texture40 image!\n" );
        success = false;
    }
    gTexture42 = loadTexture( "Images/Quiz/pass.bmp" );
    if( gTexture42 == NULL )
    {
        printf( "Failed to load texture42 image!\n" );
        success = false;
    }
    gTexture43 = loadTexture( "Images/Quiz/fail.bmp" );
    if( gTexture43 == NULL )
    {
        printf( "Failed to load texture43 image!\n" );
        success = false;
    }
    gTexture44 = loadTexture( "Images/finish.bmp" );
    if( gTexture44 == NULL )
    {
        printf( "Failed to load texture44 image!\n" );
        success = false;
    }
    gTexture45 = loadTexture( "Images/Revival.bmp" );
    if( gTexture45 == NULL )
    {
        printf( "Failed to load texture45 image!\n" );
        success = false;
    }
    gTexture46 = loadTexture( "Images/fail.bmp" );
    if( gTexture46 == NULL )
    {
        printf( "Failed to load texture46 image!\n" );
        success = false;
    }
    gTexture48 = loadTexture( "Images/name.bmp" );
    if( gTexture48 == NULL )
    {
        printf( "Failed to load texture48 image!\n" );
        success = false;
    }
    gTexture49 = loadTexture( "Images/about.bmp" );
    if( gTexture49 == NULL )
    {
        printf( "Failed to load texture40 image!\n" );
        success = false;
    }


    //Load sprites for corner button 1
    if( !gButtonSpriteSheetTexture1.loadFromFile( "Images/buttonorange.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsCorner1[ i ].x = 0;
            if( i == 1 )
            {
                gSpriteClipsCorner1[ i ].y = 74;
            }
            else
            {
                gSpriteClipsCorner1[ i ].y = 0;
            }
            gSpriteClipsCorner1[ i ].w = 187;
            gSpriteClipsCorner1[ i ].h = 74;
        }
        //Set buttons in places
        gButtonCorner1[ 0 ].setPosition( 865, 594 );
    }

    //Load sprites for menu buttons
    if( !gButtonSpriteSheetTexture3.loadFromFile( "Images/buttonorange.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < 3; ++i )
        {
            gSpriteClipsMenu[ i ].x = 0;
            if( i == 1 )
            {
                gSpriteClipsMenu[ i ].y = 74;
            }
            else
            {
                gSpriteClipsMenu[ i ].y = 0;
            }
            gSpriteClipsMenu[ i ].w = 187;
            gSpriteClipsMenu[ i ].h = 74;
        }

        //Set buttons in places
        gButtonMenu[ 0 ].setPosition( 190, 381 );
        gButtonMenu[ 1 ].setPosition( 190, 381 + 74 );
        gButtonMenu[ 2 ].setPosition( 190, 381 + 74 + 74 );
        gButtonMenu[ 3 ].setPosition( 190, 381 + 74 + 74 + 74 );
    }

    //Load sprites for corner button 2
    if( !gButtonSpriteSheetTexture2.loadFromFile( "Images/buttonorange.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsCorner2[ i ].x = 0;
            if( i == 1 )
            {
                gSpriteClipsCorner2[ i ].y = 74;
            }
            else
            {
                gSpriteClipsCorner2[ i ].y = 0;
            }
            gSpriteClipsCorner2[ i ].w = 187;
            gSpriteClipsCorner2[ i ].h = 74;
        }
        //Set buttons in places
        gButtonCorner2[ 0 ].setPosition( 865, 515 );
    }

    //Load sprites for Choose Character buttons
    if( !gButtonSpriteSheetTexture4.loadFromFile( "Images/buttonChar.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsChar[ i ].x = 0;
            if( i == 1 )
            {
                gSpriteClipsChar[ i ].y = 327;
            }
            else
            {
                gSpriteClipsChar[ i ].y = 0;
            }
            gSpriteClipsChar[ i ].w = 145;
            gSpriteClipsChar[ i ].h = 327;
        }

        //Set buttons in places
        gButtonChar[ 0 ].setPosition( 20, 268 );
        gButtonChar[ 1 ].setPosition( 20 + 158 + 10, 268 );
        gButtonChar[ 2 ].setPosition( 20 + 158 + 158 + 40, 268 );
        gButtonChar[ 3 ].setPosition( 20 + 158 + 158 + 158 + 70, 268 );
    }

    //Load sprites for Quiz buttons
    if( !gButtonSpriteSheetTexture5.loadFromFile( "Images/QuizButtons.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < 3; ++i )
        {
            gSpriteClipsQuiz[ i ].x = 21;
            if( i != 0 )
            {
                gSpriteClipsQuiz[ i ].y = 0;
            }
            else
            {
                gSpriteClipsQuiz[ i ].y = 120;
            }
            gSpriteClipsQuiz[ i ].w = 315;
            gSpriteClipsQuiz[ i ].h = 103;
        }

        //Set buttons in places
        gButtonQuiz[ 0 ].setPosition( 197, 457 );
        gButtonQuiz[ 1 ].setPosition( 562, 457 );
        gButtonQuiz[ 2 ].setPosition( 197, 576 );
        gButtonQuiz[ 3 ].setPosition( 562, 576 );
    }

    //Load sprites for Level 01 buttons
    if( !gButtonSpriteSheetTexture6.loadFromFile( "Images/Level_Buttons/L01button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel01[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel01[ i ].y = 0;
            }
            else
            {
                gSpriteClipsLevel01[ i ].y = 204;
            }
            gSpriteClipsLevel01[ i ].w = 190;
            gSpriteClipsLevel01[ i ].h = 200;
        }

        //Set buttons in places
        gButtonLevel01[ 0 ].setPosition( 100, 100 );
        gButtonLevel01[ 1 ].setPosition( 480, 100 );
        gButtonLevel01[ 2 ].setPosition( 100, 300 );
        gButtonLevel01[ 3 ].setPosition( 290, 300 );
        gButtonLevel01[ 4 ].setPosition( 670, 300 );
        gButtonLevel01[ 5 ].setPosition( 290, 500 );
        gButtonLevel01[ 6 ].setPosition( 480, 500 );
    }

    //Load sprites for Level 02 buttons
    if( !gButtonSpriteSheetTexture7.loadFromFile( "Images/Level_Buttons/L02button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel02[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel02[ i ].y = 0;
            }
            else
            {
                gSpriteClipsLevel02[ i ].y = 204;
            }
            gSpriteClipsLevel02[ i ].w = 190;
            gSpriteClipsLevel02[ i ].h = 150;
        }

        //Set buttons in places
        gButtonLevel02[ 0 ].setPosition( 100, 100 );
        gButtonLevel02[ 1 ].setPosition( 480, 100 );
        gButtonLevel02[ 2 ].setPosition( 290, 250 );
        gButtonLevel02[ 3 ].setPosition( 670, 250 );
        gButtonLevel02[ 4 ].setPosition( 100, 400 );
        gButtonLevel02[ 5 ].setPosition( 480, 400 );
        gButtonLevel02[ 6 ].setPosition( 670, 400 );
        gButtonLevel02[ 7 ].setPosition( 100, 550 );
        gButtonLevel02[ 8 ].setPosition( 290, 550 );
        gButtonLevel02[ 9 ].setPosition( 480, 550 );
    }

    //Load sprites for Level 03 buttons
    if( !gButtonSpriteSheetTexture8.loadFromFile( "Images/Level_Buttons/L03button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel03[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel03[ i ].y = 0;
            }
            else
            {
                gSpriteClips[ i ].y = 204;
            }
            gSpriteClipsLevel03[ i ].w = 152;
            gSpriteClipsLevel03[ i ].h = 200;
        }

        //Set buttons in places
        gButtonLevel03[ 0 ].setPosition( 252, 100 );
        gButtonLevel03[ 1 ].setPosition( 556, 100 );
        gButtonLevel03[ 2 ].setPosition( 708, 100 );
        gButtonLevel03[ 3 ].setPosition( 100, 300 );
        gButtonLevel03[ 4 ].setPosition( 404, 300 );
        gButtonLevel03[ 5 ].setPosition( 708, 300 );
        gButtonLevel03[ 6 ].setPosition( 252, 500 );
        gButtonLevel03[ 7 ].setPosition( 404, 500 );
        gButtonLevel03[ 8 ].setPosition( 556, 500 );
    }

    //Load sprites for Level 04 buttons
    if( !gButtonSpriteSheetTexture9.loadFromFile( "Images/Level_Buttons/L04button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel04[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel04[ i ].y = 0;
            }
            else
            {
                gSpriteClipsLevel04[ i ].y = 204;
            }
            gSpriteClipsLevel04[ i ].w = 152;
            gSpriteClipsLevel04[ i ].h = 150;
        }

        //Set buttons in places
        gButtonLevel04[ 0 ].setPosition( 100, 100 );
        gButtonLevel04[ 1 ].setPosition( 252, 100 );
        gButtonLevel04[ 2 ].setPosition( 404, 100 );
        gButtonLevel04[ 3 ].setPosition( 556, 100 );
        gButtonLevel04[ 4 ].setPosition( 100, 250 );
        gButtonLevel04[ 5 ].setPosition( 404, 250 );
        gButtonLevel04[ 6 ].setPosition( 556, 250 );
        gButtonLevel04[ 7 ].setPosition( 708, 250 );
        gButtonLevel04[ 8 ].setPosition( 100, 400 );
        gButtonLevel04[ 9 ].setPosition( 252, 400 );
        gButtonLevel04[ 10 ].setPosition( 556, 400 );
        gButtonLevel04[ 11 ].setPosition( 252, 550 );
        gButtonLevel04[ 12 ].setPosition( 404, 550 );
        gButtonLevel04[ 13 ].setPosition( 556, 550 );
        gButtonLevel04[ 14 ].setPosition( 708, 550 );
    }

    //Load sprites for Level 05 buttons
    if( !gButtonSpriteSheetTexture10.loadFromFile( "Images/Level_Buttons/L05button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel05[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel05[ i ].y = 0;
            }
            else
            {
                gSpriteClipsLevel05[ i ].y = 204;
            }
            gSpriteClipsLevel05[ i ].w = 130;
            gSpriteClipsLevel05[ i ].h = 200;
        }

        //Set buttons in places
        gButtonLevel05[ 0 ].setPosition( 100, 100 );
        gButtonLevel05[ 1 ].setPosition( 620, 100 );
        gButtonLevel05[ 2 ].setPosition( 100, 300 );
        gButtonLevel05[ 3 ].setPosition( 230, 300 );
        gButtonLevel05[ 4 ].setPosition( 360, 300 );
        gButtonLevel05[ 5 ].setPosition( 490, 300 );
        gButtonLevel05[ 6 ].setPosition( 750, 300 );
        gButtonLevel05[ 7 ].setPosition( 100, 500 );
        gButtonLevel05[ 8 ].setPosition( 360, 500 );
        gButtonLevel05[ 9 ].setPosition( 620, 500 );
    }

    //Load sprites for Level 06 buttons
    if( !gButtonSpriteSheetTexture11.loadFromFile( "Images/Level_Buttons/L06button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel06[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel06[ i ].y = 0;
            }
            else
            {
                gSpriteClipsLevel06[ i ].y = 204;
            }
            gSpriteClipsLevel06[ i ].w = 130;
            gSpriteClipsLevel06[ i ].h = 150;
        }

        //Set buttons in places
        gButtonLevel06[ 0 ].setPosition( 100, 100 );
        gButtonLevel06[ 1 ].setPosition( 360, 100 );
        gButtonLevel06[ 2 ].setPosition( 620, 100 );
        gButtonLevel06[ 3 ].setPosition( 230, 250 );
        gButtonLevel06[ 4 ].setPosition( 360, 250 );
        gButtonLevel06[ 5 ].setPosition( 490, 250 );
        gButtonLevel06[ 6 ].setPosition( 620, 250 );
        gButtonLevel06[ 7 ].setPosition( 750, 250 );
        gButtonLevel06[ 8 ].setPosition( 100, 400 );
        gButtonLevel06[ 9 ].setPosition( 230, 400 );
        gButtonLevel06[ 10 ].setPosition( 490, 400 );
        gButtonLevel06[ 11 ].setPosition( 750, 400 );
        gButtonLevel06[ 12 ].setPosition( 230, 550 );
        gButtonLevel06[ 13 ].setPosition( 360, 550 );
        gButtonLevel06[ 14 ].setPosition( 490, 550 );
        gButtonLevel06[ 15 ].setPosition( 620, 550 );
        gButtonLevel06[ 16 ].setPosition( 750, 550 );
    }

    //Load sprites for Level 07 buttons
    if( !gButtonSpriteSheetTexture12.loadFromFile( "Images/Level_Buttons/L07button.png" ) )
    {
        printf( "Failed to load button sprite texture!\n" );
        success = false;
    }
    else
    {
        //Set sprites
        for( int i = 0; i < BUTTON_SPRITE_TOTAL; ++i )
        {
            gSpriteClipsLevel07[ i ].x = 22;
            if( i != 0 )
            {
                gSpriteClipsLevel07[ i ].y = 0;
            }
            else
            {
                gSpriteClipsLevel07[ i ].y = 204;
            }
            gSpriteClipsLevel07[ i ].w = 122;
            gSpriteClipsLevel07[ i ].h = 200;
        }

        //Set buttons in places
        gButtonLevel07[ 0 ].setPosition( 222, 100 );
        gButtonLevel07[ 1 ].setPosition( 345, 100 );
        gButtonLevel07[ 2 ].setPosition( 467, 100 );
        gButtonLevel07[ 3 ].setPosition( 590, 100 );
        gButtonLevel07[ 4 ].setPosition( 712, 100 );
        gButtonLevel07[ 5 ].setPosition( 835, 100 );
        gButtonLevel07[ 6 ].setPosition( 957, 100 );
        gButtonLevel07[ 7 ].setPosition( 100, 300 );
        gButtonLevel07[ 8 ].setPosition( 222, 300 );
        gButtonLevel07[ 9 ].setPosition( 345, 300 );
        gButtonLevel07[ 10 ].setPosition( 590, 300 );
        gButtonLevel07[ 11 ].setPosition( 712, 300 );
        gButtonLevel07[ 12 ].setPosition( 957, 300 );
        gButtonLevel07[ 13 ].setPosition( 222, 500 );
        gButtonLevel07[ 14 ].setPosition( 467, 500 );
        gButtonLevel07[ 15 ].setPosition( 712, 500 );
        gButtonLevel07[ 16 ].setPosition( 957, 500 );
    }

    return success;

}

#endif // LOADMEDIA_H_INCLUDED
