#ifndef RENDERSOUND_H_INCLUDED
#define RENDERSOUND_H_INCLUDED

#include "buttons.h"
#include "texture.h"
#include "InitClose.h"
#include "loadmedia.h"
#include "rendermedia.h"
#include "navigate.h"

inline void start_music()
{
    if( !call_renderMedia( -10 ) )//...loading music
    {
        Mix_PlayMusic( gMusic, -1 );//...Play music
    }
}

inline void control_music()
{
    if( (e.type == SDL_KEYDOWN) && (e.key.keysym.sym == SDLK_m) )//...when 'M' key is pressed
    {
        printf("Stop/Start Music\n");
        //If the music is paused
        if( Mix_PausedMusic() == 1 )
        {
            //Resume the music
            Mix_ResumeMusic();
        }
        //If the music is playing
        else
        {
            //Pause the music
            Mix_PauseMusic();
        }
    }
}

void music_render( int image_num )
{
    bool game_music_resume = true;
    if( Mix_PausedMusic() != 1 )//....means game music is not muted
    {
        Mix_PauseMusic();
        game_music_resume = false;
    }
    if( image_num == 23 )//......level success
    {
        if( !call_renderMedia(-11) )//..will load success sound effect
        {
            Mix_PlayChannel( -1, gSuccess, 0 );//..will play success sound effect
        }
        SDL_Delay( 4000 );
    }
    if( image_num == 44 )//......game win
    {
        if( !call_renderMedia(-12) )//..will load game win effect
        {
            Mix_PlayChannel( -1, gGameWin, 0 );//..will play game win sound effect
        }
        SDL_Delay( 8000 );
    }
    if( image_num == 22 )//......game over
    {
        printf("entered music\n");
        if( !call_renderMedia(-13) )//..will load game over sound effect
        {
            Mix_PlayChannel( -1, gGameOver, 0 );//..will play game over sound effect
            printf("played music\n");
        }
        SDL_Delay( 7000 );
    }
    if( !game_music_resume )
    {
        Mix_ResumeMusic();
    }
}

#endif // RENDERSOUND_H_INCLUDED
