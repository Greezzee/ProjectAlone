#ifndef MENU_H
#define MENU_H

enum MenuType {
    MAIN,
    SETTINGS,
    CHARACTER_CHOOSE,
    PAUSE
};

enum MenuMessage {
    PLAY,
    SETTINGS,
    EXIT
};

class Menu
{
public:
    static MenuMessage Open(MenuType type);
};

#endif