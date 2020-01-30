#pragma once

#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

struct config {
    int debug;
    char *src;
    bool plasma;
    bool windowed;
    bool geometry;
    float offX, offY;
    float width, height;
    float transparency;
    char *shaderName;
    char *fontName;
    unsigned int fps;
    bool dontDrawIfNoSound;
    bool onlyYT;
} cfg;

void printHelp();
bool parseArgs(int argc, char *argv[]);

#define LIVEW_ENABLE_AUDIO 0
#define LIVEW_ENABLE_MUSIC 0
#define LIVEW_DEBUG 0
#define LIVEW_BUILD_NAME "liveW v0"
