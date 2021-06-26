#ifndef TEXTURE_H_INCLUDED
#define TEXTURE_H_INCLUDED

//#pragma once
#include <string>
#include <SDL_ttf.h>

//Screen dimension constants
static const int SCREEN_WIDTH = 1080;
static const int SCREEN_HEIGHT = 700;

//Loads individual image as texture
inline SDL_Texture* loadTexture( std::string path );

//textures
SDL_Texture* gTexture1 = NULL;
SDL_Texture* gTexture2 = NULL;
SDL_Texture* gTexture3 = NULL;
SDL_Texture* gTexture4 = NULL;
SDL_Texture* gTexture5 = NULL;
SDL_Texture* gTexture6 = NULL;
SDL_Texture* gTexture7 = NULL;
SDL_Texture* gTexture8 = NULL;
SDL_Texture* gTexture9 = NULL;
SDL_Texture* gTexture10 = NULL;
SDL_Texture* gTexture11 = NULL;
SDL_Texture* gTexture12 = NULL;
SDL_Texture* gTexture13 = NULL;
SDL_Texture* gTexture14 = NULL;
SDL_Texture* gTexture15 = NULL;
SDL_Texture* gTexture16 = NULL;
SDL_Texture* gTexture17 = NULL;
SDL_Texture* gTexture18 = NULL;
SDL_Texture* gTexture19 = NULL;
SDL_Texture* gTexture20 = NULL;
SDL_Texture* gTexture21 = NULL;
SDL_Texture* gTexture22 = NULL;
SDL_Texture* gTexture23 = NULL;
SDL_Texture* gTexture24 = NULL;
SDL_Texture* gTexture25 = NULL;
SDL_Texture* gTexture26 = NULL;
SDL_Texture* gTexture27 = NULL;
SDL_Texture* gTexture28 = NULL;
SDL_Texture* gTexture29 = NULL;
SDL_Texture* gTexture30 = NULL;
SDL_Texture* gTexture31 = NULL;
SDL_Texture* gTexture32 = NULL;
SDL_Texture* gTexture33 = NULL;
SDL_Texture* gTexture34 = NULL;
SDL_Texture* gTexture35 = NULL;
SDL_Texture* gTexture36 = NULL;
SDL_Texture* gTexture37 = NULL;
SDL_Texture* gTexture38 = NULL;
SDL_Texture* gTexture39 = NULL;
SDL_Texture* gTexture40 = NULL;
SDL_Texture* gTexture41 = NULL;
SDL_Texture* gTexture42 = NULL;
SDL_Texture* gTexture43 = NULL;
SDL_Texture* gTexture44 = NULL;
SDL_Texture* gTexture45 = NULL;
SDL_Texture* gTexture46 = NULL;
SDL_Texture* gTexture47 = NULL;
SDL_Texture* gTexture48 = NULL;
SDL_Texture* gTexture49 = NULL;
//The window renderer
SDL_Renderer* gRenderer = NULL;

//The window we'll be rendering to
SDL_Window* gWindow = NULL;

//Globally used font
TTF_Font *gFont = NULL;

//Texture wrapper class
class LTexture
{
	public:
		//Initializes variables
		inline LTexture();

		//Deallocates memory
		inline ~LTexture();

		//Loads image at specified path
		inline bool loadFromFile( std::string path );

		#if defined(SDL_TTF_MAJOR_VERSION)
		//Creates image from font string
		inline bool loadFromRenderedText( std::string textureText, SDL_Color textColor );
		#endif

		//Deallocates texture
		inline void free();

		//Set color modulation
		inline void setColor( Uint8 red, Uint8 green, Uint8 blue );

		//Set blending
		inline void setBlendMode( SDL_BlendMode blending );

		//Set alpha modulation
		inline void setAlpha( Uint8 alpha );

		//Renders texture at given point
		inline void render( int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE );

		//Gets image dimensions
		inline int getWidth();
		inline int getHeight();

	private:
		//The actual hardware texture
		SDL_Texture* mTexture;

		//Image dimensions
		int mWidth;
		int mHeight;
};

//Scene textures
LTexture gTimeTextTexture;//..for time taken and score after level success
LTexture gScoreTextTexture;//...for final score after game finish/over

//The music that will be played
Mix_Music *gMusic = NULL;

//The sound effects that will be used
Mix_Chunk *gSuccess = NULL;
Mix_Chunk *gGameWin = NULL;
Mix_Chunk *gGameOver = NULL;

inline LTexture::LTexture()
{
	//Initialize
	mTexture = NULL;
	mWidth = 0;
	mHeight = 0;
}

inline LTexture::~LTexture()
{
	//Deallocate
	free();
}

inline bool LTexture::loadFromFile( std::string path )
{
	//Get rid of preexisting texture
	free();

	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Color key image
		SDL_SetColorKey( loadedSurface, SDL_TRUE, SDL_MapRGB( loadedSurface->format, 0, 0xFF, 0xFF ) );

		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}
		else
		{
			//Get image dimensions
			mWidth = loadedSurface->w;
			mHeight = loadedSurface->h;
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	//Return success
	mTexture = newTexture;
	return mTexture != NULL;
}

#if defined(SDL_TTF_MAJOR_VERSION)
bool LTexture::loadFromRenderedText( std::string textureText, SDL_Color textColor )
{
	//Get rid of preexisting texture
	free();

	//Render text surface
	SDL_Surface* textSurface = TTF_RenderText_Solid( gFont, textureText.c_str(), textColor );
	if( textSurface != NULL )
	{
		//Create texture from surface pixels
        mTexture = SDL_CreateTextureFromSurface( gRenderer, textSurface );
		if( mTexture == NULL )
		{
			printf( "Unable to create texture from rendered text! SDL Error: %s\n", SDL_GetError() );
		}
		else
		{
			//Get image dimensions
			mWidth = textSurface->w;
			mHeight = textSurface->h;
		}

		//Get rid of old surface
		SDL_FreeSurface( textSurface );
	}
	else
	{
		printf( "Unable to render text surface! SDL_ttf Error: %s\n", TTF_GetError() );
	}


	//Return success
	return mTexture != NULL;
}
#endif

inline void LTexture::free()
{
	//Free texture if it exists
	if( mTexture != NULL )
	{
		SDL_DestroyTexture( mTexture );
		mTexture = NULL;
		mWidth = 0;
		mHeight = 0;
	}
}

inline void LTexture::setColor( Uint8 red, Uint8 green, Uint8 blue )
{
	//Modulate texture rgb
	SDL_SetTextureColorMod( mTexture, red, green, blue );
}

inline void LTexture::setBlendMode( SDL_BlendMode blending )
{
	//Set blending function
	SDL_SetTextureBlendMode( mTexture, blending );
}

inline void LTexture::setAlpha( Uint8 alpha )
{
	//Modulate texture alpha
	SDL_SetTextureAlphaMod( mTexture, alpha );
}

inline void LTexture::render( int x, int y, SDL_Rect* clip, double angle, SDL_Point* center, SDL_RendererFlip flip )
{
	//Set rendering space and render to screen
	SDL_Rect renderQuad = { x, y, mWidth, mHeight };

	//Set clip rendering dimensions
	if( clip != NULL )
	{
		renderQuad.w = clip->w;
		renderQuad.h = clip->h;
	}

	//Render to screen
	SDL_RenderCopyEx( gRenderer, mTexture, clip, &renderQuad, angle, center, flip );
}

inline int LTexture::getWidth()
{
	return mWidth;
}

inline int LTexture::getHeight()
{
	return mHeight;
}

inline SDL_Texture* loadTexture( std::string path )
{
	//The final texture
	SDL_Texture* newTexture = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
	if( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		//Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( gRenderer, loadedSurface );
		if( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		//Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}

#endif // TEXTURE_H_INCLUDED
