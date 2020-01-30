#ifndef _RENDERER_H
#define _RENDERER_H
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#if 0
#include <ft2build.h>
#include FT_FREETYPE_H
#endif

#include "xwin.h"
#include "utils.h"
#include "config.h"

typedef struct renderer {
	xwin *win;
    GLuint progID, progText;
	GLXContext ctx;
#if 0
    GLuint audioSamples;
    GLuint audioFFT;

	GLuint albumArt;
	SongInfo songInfo;
#endif
} renderer;

GLuint vertArray, posBuf;
GLuint VAO, VBO;

#if 0
FT_Library ft;
FT_Face face;

typedef struct character {
    GLuint	textureID;
    float	sizeX, sizeY;
    float	bearingX, bearingY;
    GLuint	advance;
} character;

character *characters[65536];
#endif

renderer *init_rend();
void linkBuffers(renderer *r);
void render(renderer *r, float *sampleBuff, float *fftBuff, int buffSize);

#endif
