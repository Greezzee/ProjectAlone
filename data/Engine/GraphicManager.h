#ifndef GRAPHICMANAGER_H
#define GRAPHICMANAGER_H

#include <string>
#include "Vectors.h"

enum WindowMode {
    WINDOWED,
    FULLSCREEN
};

class GraphicManager
{
public:
    static void OpenWindow(std::string window_name, WindowMode mode = FULLSCREEN, Vector2u size = Vector2u(0, 0));
    static void LoadTextures();
    static void CloseWindows();
    static void FreeTextures();
};

#endif