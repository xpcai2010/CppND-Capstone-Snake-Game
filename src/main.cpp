#include <iostream>
#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "gamemenu.h"
#include "gamedata.h"

int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  Gamemenu gm;
  Gamedata game_data("../data/record.txt");

  while (true){
    gm.optionSelection();
    int gameOptions = gm.getOption();
    switch (gameOptions){
      case 1:
        std::cout<<std::endl;
        break;

      case 2:
        game_data.Print();
        continue;
        break;

      case 3:
        std::cout << "Game has terminated! \n";
        return 0;
        break;
      
      default:
        std::cerr<<"Invalid Input \n"<<"Game has terminated!! \n";
        return 0;
        break;
    }

    std::cout << "Start the game" << std::endl;
    std::cout << std::endl;

    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);

    std::cout << "Score: " << game.GetScore() << std::endl;
    std::cout << "Size: " << game.GetSize() << std::endl;
    std::cout << "Snake Head has travelled: " << game.GetSnakeHeadTotalTravelDistance() << std::endl;
    game_data.Append(game.GetScore()); // append and save game score
    game_data.Write();
  }
  return 0;
}