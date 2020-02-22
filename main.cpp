
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL_image.h>

//#include <OPIQUETZAL/VITAL>

void pause();
int main ( int argc, char** argv )
{
SDL_Surface *ecran = NULL;
SDL_Surface *raquette = NULL;
SDL_Surface *balle = NULL;
SDL_Surface *brique1 = NULL;
SDL_Surface *brique2 = NULL;
SDL_Surface *brique3 = NULL;
SDL_Surface *brique4 = NULL;
SDL_Surface *brique5= NULL;
SDL_Surface *brique6 = NULL;
SDL_Surface *brique7 = NULL;
SDL_Surface *brique8 = NULL;
SDL_Surface *brique9= NULL;
SDL_Surface *brique10 = NULL;
SDL_Surface *brique11 = NULL;

SDL_Rect positionRaquette;
SDL_Rect positionBalle;
SDL_Rect positionBrique1;
SDL_Rect positionBrique2;
SDL_Rect positionBrique3;
SDL_Rect positionBrique4;
SDL_Rect positionBrique5;
SDL_Rect positionBrique6;
SDL_Rect positionBrique7;
SDL_Rect positionBrique8;
SDL_Rect positionBrique9;
SDL_Rect positionBrique10;
SDL_Rect positionBrique11;

 SDL_Event event;
  int continuer = 1;

SDL_Init(SDL_INIT_VIDEO);

SDL_WM_SetIcon(SDL_LoadBMP("vital.bmp"), NULL);

SDL_WM_SetCaption("CIRHUZA MULUMEODERHWA VITAL/ CASSE-BRIQUES", NULL);

ecran = SDL_SetVideoMode(673, 480, 32, SDL_HWSURFACE);

raquette = SDL_LoadBMP("cb.bmp");
balle = SDL_LoadBMP("balle.bmp");
brique1 = SDL_LoadBMP("brique 1.bmp");
brique2 = SDL_LoadBMP("brique 2.bmp");
brique3 = SDL_LoadBMP("brique 3.bmp");
brique4 = SDL_LoadBMP("brique 4.bmp");
brique5 = SDL_LoadBMP("brique 5.bmp");
brique6 = SDL_LoadBMP("brique 6.bmp");
brique7 = SDL_LoadBMP("brique 7.bmp");
brique8 = SDL_LoadBMP("brique 8.bmp");
brique9 = SDL_LoadBMP("brique 9.bmp");
brique10 = SDL_LoadBMP("brique 10.bmp");
brique11 = SDL_LoadBMP("brique 11.bmp");



SDL_SetColorKey(raquette, SDL_SRCCOLORKEY, SDL_MapRGB(raquette->format, 0, 0, 0));
SDL_SetColorKey(balle, SDL_SRCCOLORKEY, SDL_MapRGB(balle->format, 255, 255, 255));

 positionRaquette.x = ecran->w / 2 - raquette->w / 2;
 positionRaquette.y = ecran->h / 1.3 - raquette->h / 2;

 positionBalle.x = ecran->w / 2 - balle->w / 2;
 positionBalle.y = 300;

 positionBrique1.x = 0;
 positionBrique1.y = 0;

 positionBrique2.x = 96;
 positionBrique2.y = 48;

 positionBrique3.x = 192;
 positionBrique3.y = 0;

 positionBrique4.x = 288;
 positionBrique4.y = 48;

 positionBrique5.x = 384;
 positionBrique5.y = 0;

 positionBrique6.x = 480;
 positionBrique6.y = 48;

 positionBrique7.x = 576;
 positionBrique7.y = 0;

 positionBrique8.x = 0;
 positionBrique8.y = 96;

 positionBrique9.x = 192;
 positionBrique9.y = 96;

 positionBrique10.x = 385;
 positionBrique10.y = 96;

 positionBrique11.x = 576;
 positionBrique11.y = 96;

SDL_EnableKeyRepeat(10, 10);

while (continuer)
    {
         SDL_WaitEvent(&event);
          switch(event.type)
          {
          case SDL_QUIT:
            continuer=0;
          case SDL_KEYDOWN:
              switch (event.key.keysym.sym)
              {
           case SDLK_UP:
            positionRaquette.y--;
                   break;
               case SDLK_DOWN:
                   positionRaquette.y++;
                   break;
               case SDLK_RIGHT:
                   positionRaquette.x++;
                   break;
               case SDLK_LEFT:
                   positionRaquette.x--;
                   break;
              }
          break;
    }
SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 39, 233,223));
SDL_BlitSurface(raquette, NULL, ecran, &positionRaquette);
SDL_SetAlpha(raquette, SDL_SRCALPHA, 250);

SDL_BlitSurface(balle, NULL, ecran, &positionBalle);
SDL_SetAlpha(balle, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique1, NULL, ecran, &positionBrique1);
SDL_SetAlpha(brique1, SDL_SRCALPHA, 250);


SDL_BlitSurface(brique2, NULL, ecran, &positionBrique2);
SDL_SetAlpha(brique2, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique3, NULL, ecran, &positionBrique3);
SDL_SetAlpha(brique3, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique4, NULL, ecran, &positionBrique4);
SDL_SetAlpha(brique4, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique5, NULL, ecran, &positionBrique5);
SDL_SetAlpha(brique5, SDL_SRCALPHA, 250);


SDL_BlitSurface(brique6, NULL, ecran, &positionBrique6);
SDL_SetAlpha(brique6, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique7, NULL, ecran, &positionBrique7);
SDL_SetAlpha(brique7, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique8, NULL, ecran, &positionBrique8);
SDL_SetAlpha(brique8, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique9, NULL, ecran, &positionBrique9);
SDL_SetAlpha(brique9, SDL_SRCALPHA, 250);


SDL_BlitSurface(brique10, NULL, ecran, &positionBrique10);
SDL_SetAlpha(brique10, SDL_SRCALPHA, 250);

SDL_BlitSurface(brique11, NULL, ecran, &positionBrique11);
SDL_SetAlpha(brique11, SDL_SRCALPHA, 250);

SDL_Flip(ecran);
}
SDL_FreeSurface(raquette);
SDL_FreeSurface(balle);
SDL_FreeSurface(brique1);
SDL_FreeSurface(brique2);
SDL_FreeSurface(brique3);
SDL_FreeSurface(brique4);
SDL_FreeSurface(brique5);
SDL_FreeSurface(brique6);
SDL_FreeSurface(brique7);
SDL_FreeSurface(brique8);
SDL_FreeSurface(brique9);
SDL_FreeSurface(brique10);
SDL_FreeSurface(brique11);


SDL_Quit();
return EXIT_SUCCESS;
}
