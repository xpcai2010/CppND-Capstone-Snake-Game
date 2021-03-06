# CPPND: Capstone Snake Game Example

This is a starter repo for the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

<img src="snake_game.gif"/>


[//]: # (Image References)
[image1]: ./markdown/menu_option.png "menu"
[image2]: ./markdown/game_screen_1.png "screen 1"
[image3]: ./markdown/game_screen_2.png "screen 2"

## Game Introduction
The Capstone Project gives me a chance to integrate what I've learned throughout this program. In this project, I've extended this Snake game, following the principles I have learned throughout this Nanodegree Program. 

## How to run the game

Once you start the game (by typing ./SnakeGame), the game menu shows up from the console. The player has 3 options: see below   

![alt text][image1]

If the player select option 1 - "Game Start", the game screen pops up. The blue square is the snake head. The yellow square is the food that snake wants to eat. I've also desinged the obstacle (bomb) for the player to add some difficulties. Default number of obstacles is 8 specified in the code.

![alt text][image2]

If the player select option 2 - "Game Ranking", it will show the top players (maximum top 10 players) that ever played the game, from high to low points.

![alt text][image3]

If the player select option 3 - "Game Quit", it will end the game.

## Class Structure

There are 7 classes in total for the snake game to be run successfully.

| Class name | Purpose                                                                                                        |
| ---------- | ---------------------------------------------------------------------------------------------------------------|
| Controller | Interact with users, let users use keyboard to control the snake in the game.                                  |
| Game       | Game class stores the state in the game, the function object **run** has the game run in loops til end.        |
| Render     | Render the game to the screen.                                                                                 |
| Snake      | Contains attributes to keep track of the Snake speed, size, and location.                                      |
| Obstacles  | Obstacles as shown up as bombs to the snake game as a way to increase the gaming difficulties for the play     |
| Gamedata   | Read, Save and print the history records of players.                                                           |
| Gamemenu   | Game menu in the console for the play to select the gaming options                                             |

Additionally, a record.txt file in the ./data/ is for saving and loading the game record (palyers' names and scores they've got).

## Rubric Points that support the project

### ***Criteria 1 - README (All Rubric Points REQUIRED)***
*1.1) A README with instructions is included with the project* <br>

As you're reading the README right now, this markdown README is provided as a summary of the project.

*1.2) The README indicates which project is chosen.* <br>

A README with instructions is included with the project. As mentioned in the beginning, I've extended Snake game, following the principles I have learned throughout this Nanodegree Program.

*1.3) The README includes information about each rubric point addressed.* <br>

As you're reading the README right now, I'm breaking down the rubric points and address them on how I achieved each point.


### ***Criteria 2 - Compiling and Testing (All Rubric Points REQUIRED)***
*2.1) The submission must compile and run.* <br>

The game is able to be compiled and run.

### ***Criteria 3 - Loops, Functions, I/O***
*3.1) The project demonstrates an understanding of C++ functions and control structures.* <br>

The project code is Object-Oriented Programming with the security mechanism in order to avoid fail states. I used a *while loop* in the `main.cpp` as well as other files. *If-statements* is used in the `gamedata.cpp` as well as other files. *for loop* is also used in many places. The project code is clearly organized into functions.

*3.2) The project reads data from a file and process the data, or the program writes data to a file.* <br>

The project reads data (players' history record) in `gamedata.cpp`. It also writes plays' scores in the same file `./data/record.txt`. For the obstacles, it loads bomb obstacle from `./assets/bomb.bmp`, then to be displayed in the game screen.

*3.3) The project accepts user input and processes the input.* <br>

The `Gamemenu` class accepts player's input and processes the input. It's interactive interface with the players. It allows the player to start the game, or see the gaming score ranking or quite the game. 

### ***Criteria 4 - Object Oriented Programming***
*4.1) The project uses Object Oriented Programming techniques.* <br>

The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks. Three additional classes have been designed - `Obstacles` to manage the obstacles, `Gamedata` to save and read the players' scores and `Gamemenu` to select the gaming options for the players.

*4.2) Classes use appropriate access specifiers for class members.* <br>

All class data members are explicitly specified as public, protected, or private.

*4.3) Class constructors utilize member initialization lists.* <br>
All class members that are set to argument values are initialized through member initialization lists.

*4.4) Classes abstract implementation details from their interfaces.* <br>

All class member functions document their effects, either through function names, comments, or formal documentation. Member functions do not change program state in undocumented ways.

*4.5) Classes encapsulate behavior.* <br>

Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.

*4.6) Classes follow an appropriate inheritance hierarchy.* <br>

Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.

### ***Criteria 5 - Memory Management***
*5.1) The project makes use of references in function declarations.* <br>
At least two variables are defined as references, or two functions use pass-by-reference in the project code.

*5.2) The project uses destructors appropriately.* <br>
At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.

*5.3) The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate.* <br>
The project follows the Resource Acquisition Is Initialization pattern where appropriate, by allocating objects at compile-time, initializing objects when they are declared, and utilizing scope to ensure their automatic destruction.

*5.4) The project uses move semantics to move data, instead of copying it, where possible.* <br>
For classes with move constructors, the project returns objects of that class by value, and relies on the move constructor, instead of copying the object.

*5.5) The project uses smart pointers instead of raw pointers.* <br>
The project uses at least one smart pointer: unique_ptr, shared_ptr, or weak_ptr. The project does not use raw pointers.

### ***Criteria 6 - Concurrency***
*6.1) A mutex or lock is used in the project.* <br>
A mutex or lock `std::lock_guard` is used to protect data that is shared across multiple threads in the project code.


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
