#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>
#include <./Engine/Vectors.h>
#include <./Engine/GraphicManager.h>
#include <./Menues/Menu.h>

class Game
{
public:
    static void Run(const std::string& mode);
private:
};

void Game::Run(const std::string& mode)
{
    GraphicManager::OpenWindow("game", WindowMode::WINDOWED, Vector2u(500u, 500u));
    GraphicManager::LoadTextures();
    
    try {
        while(true) {
            MenuMessage message = Menu::Open(MenuType::MAIN);
            switch (message)
            {
            case MenuMessage::PLAY:
                Menu::Open(MenuType::CHARACTER_CHOOSE);
                break;
            case MenuMessage::SETTINGS:
                Menu::Open(MenuType::SETTINGS);
                break;
            case MenuMessage::EXIT:
                GraphicManager::CloseWindows();
                GraphicManager::FreeTextures();
                return;
                break;
            default:
                break;
            }
        }
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

}

#endif