#ifndef GAMEMENU_H
#define GAMEMENU_H

class Gamemenu{
public:
    Gamemenu(){};
    ~Gamemenu(){};
    void optionSelection();
    int getOption();

private:
    int _game_options; 
};

#endif