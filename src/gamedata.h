#ifndef GAMEDATA_H
#define GAMEDATA_H

#include <string>
#include <map>

class Gamedata{
public:
    Gamedata(std::string name);
    ~Gamedata(){};
    void Print();
    void Append(int point);
    void Write();


private:
    std::string _file_name;
    std::multimap<int, std::string, std::greater<int>> _points;
};

#endif