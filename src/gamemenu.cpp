#include "gamemenu.h"
#include <iostream>
#include <string>


void Gamemenu::optionSelection(){
    int option_input;
    std::cout<<"#####################  SNAKE GAME MENU  ########################"<<std::endl
             <<"### Please Enter Integer 1 to 3 to Select Following Options  ###"<<std::endl
             <<"### 1. Game Start                                            ###"<<std::endl
             <<"### 2. Game Ranking                                          ###"<<std::endl
             <<"### 3. Game Quit                                             ###"<<std::endl
             <<"################################################################"<<std::endl
             <<std::endl
             <<"Your Choice ---> ";
    while (std::cin >> option_input){
        if (option_input == 1 || option_input ==2 || option_input == 3)
            break;

        std::cout<<"Please Enter Integer 1 or 2 or 3 as Your Options!"<<std::endl;
    }        

    if (std::cin.fail()){
        option_input = 3;
        std::cerr <<"Invalid Option Inputs"<<std::endl;
    }

    _game_options = option_input;

    return;
}

int Gamemenu::getOption(){
    return _game_options;
}   