#ifndef BUTTONS_H_INCLUDED
#define BUTTONS_H_INCLUDED

//#pragma once
#include "texture.h"

static int image_number = 1, quiz = 0, Char = 0, check = 0, revival_back_to = 0,  total_score = 0, checkk = 1, button_number = 1, char_num = 0, current_level = 0, button_level_total = 0, score = 0;
Uint32 startTime =  0, endTime = 0;
//The rerender text flag
bool renderText = false;

//In memory text stream
std::stringstream scoreText;
std::stringstream timeText;
//Set text colors
SDL_Color textColor = { 0, 0, 0, 255 }; //Set text color as black for level success page
SDL_Color ScoretextColor = { 255, 10, 0, 255 }; //Set text color as red for game win/over page
SDL_Color nametextColor = { 0, 0, 0, 0xFF };

//Event Handler
SDL_Event e;

//Button constants
static int BUTTON_WIDTH;
static int BUTTON_HEIGHT;
static const int TOTAL_BUTTONS = 17;

enum LButtonSprite
{

	BUTTON_SPRITE_MOUSE_OUT = 0,
	BUTTON_SPRITE_MOUSE_OVER_MOTION = 1,
	BUTTON_SPRITE_MOUSE_DOWN = 2,
	BUTTON_SPRITE_TOTAL = 3
};

//Mouse button sprites and character sprites
SDL_Rect gSpriteClips[ 3 ];
SDL_Rect gSpriteClipsCorner1[ 3 ];
SDL_Rect gSpriteClipsMenu[ 3 ];
SDL_Rect gSpriteClipsCorner2[ 3 ];
SDL_Rect gSpriteClipsChar[ 3 ];
SDL_Rect gSpriteClipsQuiz[ 3 ];
SDL_Rect gSpriteClipsLevel01[ 3 ];
SDL_Rect gSpriteClipsLevel02[ 3 ];
SDL_Rect gSpriteClipsLevel03[ 3 ];
SDL_Rect gSpriteClipsLevel04[ 3 ];
SDL_Rect gSpriteClipsLevel05[ 3 ];
SDL_Rect gSpriteClipsLevel06[ 3 ];
SDL_Rect gSpriteClipsLevel07[ 3 ];

LTexture gButtonSpriteSheetTexture;
LTexture gButtonSpriteSheetTexture1;//..corner button 1
LTexture gButtonSpriteSheetTexture2;//..corner button 2
LTexture gButtonSpriteSheetTexture3;//..menu button
LTexture gButtonSpriteSheetTexture4;//..choose char button
LTexture gButtonSpriteSheetTexture5;//..quiz buttons
LTexture gButtonSpriteSheetTexture6;//..Level 1 buttons
LTexture gButtonSpriteSheetTexture7;//..Level 2 buttons
LTexture gButtonSpriteSheetTexture8;//..Level 3 buttons
LTexture gButtonSpriteSheetTexture9;//..Level 4 buttons
LTexture gButtonSpriteSheetTexture10;//..Level 5 buttons
LTexture gButtonSpriteSheetTexture11;//..Level 6 buttons
LTexture gButtonSpriteSheetTexture12;//..Level 7 buttons

LTexture gSpriteSheetTexture;//.. characters

inline void render_Character( int image_num, int char_num );
inline void render_buttons( int image_num, int total_buttons_level );
inline int pressedButton( int imgnum );
int clic2view( int image_num, int button_num );
inline int Time_Up();
inline int next_level_invite( int present_level );
inline int Button_Level_Total( int image_num );
inline int button_module( int image_num, int next_image );
inline int next_image_show( int current_image );
inline void music_render( int image_num );
inline void name_input();
inline int level_button_check( int level, int i );
inline bool call_renderMedia( int image_num );
inline bool renderMedia( int image_num );
inline void start_music();
inline void control_music();
inline void handle( int image_num );


//The mouse button
class LButton
{
	public:
		//Initializes internal variables
		inline LButton();

		//Sets top left position
		inline void setPosition( int x, int y );

		//Handles mouse event
		inline int handleEvent( SDL_Event* e );

		//Shows button sprite
		inline void render( int ButtonNumber );

	private:
		//Top left position
		SDL_Point mPosition;

		//Currently used global sprite
		LButtonSprite mCurrentSprite;
};

//Buttons objects
//LButton gButtons[ TOTAL_BUTTONS ];
LButton gButtonCorner1[ 4 ];
LButton gButtonCorner2[ 4 ];
LButton gButtonMenu[ 4 ];
LButton gButtonChar[ 4 ];
LButton gButtonQuiz[ 4 ];
LButton gButtonLevel01[ 7 ];
LButton gButtonLevel02[ 10 ];
LButton gButtonLevel03[ 9 ];
LButton gButtonLevel04[ 15 ];
LButton gButtonLevel05[ 10 ];
LButton gButtonLevel06[ 17 ];
LButton gButtonLevel07[ 17 ];

inline LButton::LButton()
{
	mPosition.x = 0;
	mPosition.y = 0;

	mCurrentSprite = BUTTON_SPRITE_MOUSE_OUT;
}

inline void LButton::setPosition( int x, int y )
{
	mPosition.x = x;
	mPosition.y = y;
}

inline int LButton::handleEvent( SDL_Event* e )
{
    int types = 1;
	//If mouse event happened
	if( e->type == SDL_MOUSEMOTION || e->type == SDL_MOUSEBUTTONDOWN )
	{
		//Get mouse position
		int x, y;
		SDL_GetMouseState( &x, &y );

		//Check if mouse is in button
		bool inside = true;

		//Mouse is left of the button
		if( x < mPosition.x )
		{
			inside = false;
		}
		//Mouse is right of the button
		else if( x > mPosition.x + BUTTON_WIDTH )
		{
			inside = false;
		}
		//Mouse above the button
		else if( y < mPosition.y )
		{
			inside = false;
		}
		//Mouse below the button
		else if( y > mPosition.y + BUTTON_HEIGHT )
		{
			inside = false;
		}

		//Mouse is outside button
		if( !inside )
		{
			mCurrentSprite = BUTTON_SPRITE_MOUSE_OUT;
			return types;
		}
		//Mouse is inside button
		else
		{
			//Set mouse over sprite
			switch( e->type )
			{
				case SDL_MOUSEMOTION:
				mCurrentSprite = BUTTON_SPRITE_MOUSE_OVER_MOTION;
				return types;
				break;

				case SDL_MOUSEBUTTONDOWN:
				mCurrentSprite = BUTTON_SPRITE_MOUSE_DOWN;
                types = 2;
                return types;
				break;
			}
		}
	}
	return types;
}

inline void LButton::render( int ButtonNumber )
{
	//Show current button sprite
	if( ButtonNumber == 1 )
    {
        gButtonSpriteSheetTexture1.render( mPosition.x, mPosition.y, &gSpriteClipsCorner1[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 2 )
    {
        gButtonSpriteSheetTexture2.render( mPosition.x, mPosition.y, &gSpriteClipsCorner2[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 3 )
    {
        gButtonSpriteSheetTexture3.render( mPosition.x, mPosition.y, &gSpriteClipsMenu[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 4 )
    {
        gButtonSpriteSheetTexture4.render( mPosition.x, mPosition.y, &gSpriteClipsChar[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 5 )
    {
        gButtonSpriteSheetTexture5.render( mPosition.x, mPosition.y, &gSpriteClipsQuiz[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 6 )
    {
        gButtonSpriteSheetTexture6.render( mPosition.x, mPosition.y, &gSpriteClipsLevel01[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 7 )
    {
        gButtonSpriteSheetTexture7.render( mPosition.x, mPosition.y, &gSpriteClipsLevel02[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 8 )
    {
        gButtonSpriteSheetTexture8.render( mPosition.x, mPosition.y, &gSpriteClipsLevel03[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 9 )
    {
        gButtonSpriteSheetTexture9.render( mPosition.x, mPosition.y, &gSpriteClipsLevel04[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 10 )
    {
        gButtonSpriteSheetTexture10.render( mPosition.x, mPosition.y, &gSpriteClipsLevel05[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 11 )
    {
        gButtonSpriteSheetTexture11.render( mPosition.x, mPosition.y, &gSpriteClipsLevel06[ mCurrentSprite ] );
    }
    else if( ButtonNumber == 12 )
    {
        gButtonSpriteSheetTexture12.render( mPosition.x, mPosition.y, &gSpriteClipsLevel07[ mCurrentSprite ] );
    }

}

inline void render_buttons( int image_num, int total_buttons_level )
{
    //Clear screen
    SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
    //refresh();

    if( image_num == 5 )//...corner button 1
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonCorner1[ i ].render( 2 );
        }
    }
    else if( image_num == 8 )//...corner button 2
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonCorner2[ i ].render( 2 );
        }
    }
    else if( image_num == 3 )//...menu buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonMenu[ i ].render( 3 );
        }
    }
    else if( image_num == 11 )//...choose char buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonChar[ i ].render( 4 );
        }
    }
    else if( image_num == 19 )//...quiz buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonQuiz[ i ].render( 5 );
        }
    }
    else if( image_num == 20 )//...Level 01 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel01[ i ].render( 6 );
        }
    }
    else if( image_num == 26 )//...Level 02 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel02[ i ].render( 7 );
        }
    }
    else if( image_num == 29 )//...Level 03 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel03[ i ].render( 8 );
        }
    }
    else if( image_num == 32 )//...Level 04 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel04[ i ].render( 9 );
        }
    }
    else if( image_num == 35 )//...Level 05 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel05[ i ].render( 10 );
        }
    }
    else if( image_num == 38 )//...Level 06 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel06[ i ].render( 11 );
        }
    }
    else if( image_num == 41 )//...Level 07 buttons
    {
        for( int i = 0; i < total_buttons_level; ++i )
        {
            gButtonLevel07[ i ].render( 12 );
        }
    }

    //Update screen
    SDL_RenderPresent( gRenderer );
}

int button_module( int image_num, int next_image )
{
    int button_image = 0;
    if( (image_num == 4) || (image_num == 6) || (image_num == 7) || (image_num == 9) || (image_num == 48) || (image_num == 49) )
    {
        if( (image_num == 6) || (image_num == 48) || (image_num == 49) )
        {
            button_image = 8;
            if( (  !call_renderMedia( image_num ) )  &&  ( !call_renderMedia( button_image ) )  )
            {
                check = gButtonCorner2[ 0 ].handleEvent( &e );
                if( check == 2 ) // means the button pressed
                {
                    image_num = next_image;
                }
            }
        }
        else
        {
            button_image = 5;
            if( (  !call_renderMedia( image_num ) )  &&  ( !call_renderMedia( button_image ) )  )
            {
                check = gButtonCorner1[ 0 ].handleEvent( &e );
                if( check == 2 ) // means the button pressed
                {
                    image_num = next_image;
                }
            }
        }
    }
    return image_num;
}

inline int level_button_check( int level, int i )
{
    int checking;
    if( level == 20 )//..level 1
    {
        checking = gButtonLevel01[ i ].handleEvent( &e );
    }
    else if( level == 26 )//..level 1
    {
        checking = gButtonLevel02[ i ].handleEvent( &e );
    }
    else if( level == 29 )//..level 2
    {
        checking = gButtonLevel03[ i ].handleEvent( &e );
    }
    else if( level == 32 )//..level 3
    {
        checking = gButtonLevel04[ i ].handleEvent( &e );
    }
    else if( level == 35 )//..level 4
    {
        checking = gButtonLevel05[ i ].handleEvent( &e );
    }
    else if( level == 38 )//..level 5
    {
        checking = gButtonLevel06[ i ].handleEvent( &e );
    }
    else if( level == 41 )//..level 6
    {
        checking = gButtonLevel07[ i ].handleEvent( &e );
    }

    return checking;
}

#endif // BUTTONS_H_INCLUDED
