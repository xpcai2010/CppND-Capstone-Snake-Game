#include "gamedata.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

/* Gamedata constructor */
Gamedata::Gamedata(std::string name) : _file_name(name){
    std::ifstream input(name);
    std::string gamer;
    int points;
    if (!input){
        std::ofstream(name, std::fstream::out);
        return;
    }

    while (input >> gamer){
        input >> points;
        _points.insert(std::pair<int, std::string>(points, gamer));
    }
}

void Gamedata::Print(){
    if (_points.empty()){
        std::cout<<"No Game Record Existed !"<<std::endl;
        std::cout<<std::endl;
        return;
    }

    std::cout<< " Rank " 
             << " | " << std::setw(12)<<"Name "
             << "| " << "Game Points "
             <<std::endl;

    std::multimap<int,std::string>::iterator it = _points.begin();
    int len = _points.size() > 10 ? 10 : _points.size();
    int i = 1;
    for (it; it != _points.end() && i <= len; ++it){
        std::cout << std::setw(6) << " " + std::to_string(i) + " "
                  << " | " << std::setw(12) << it->second << "| "
                  << it->first
                  <<std::endl;
        i++;
    } 

    std::cout<<std::endl;
}

void Gamedata::Append(int points){
    std::string gamer;
    std::cout <<"Please Type Your Name >>> " << std::endl;
    std::cin >> gamer;
    _points.insert(std::pair<int, std::string>(points, gamer));
}

void Gamedata::Write(){
    std::ofstream output(_file_name, std::ofstream::out);
    std::multimap<int,std::string>::iterator it;
    for (it = _points.begin(); it != _points.end(); it++){
        output << it->second << "\t" << it->first << std::endl;
    }
}
