#include "obstacles.h"

// Constructor
Obstacles::Obstacles(){
   _coordinates = std::unique_ptr<std::vector<Coordinate>>(new std::vector<Coordinate>);
}

void Obstacles::AddCoordinate(const Coordinate &&coordinate){
   _coordinates->emplace_back(coordinate);
}

bool Obstacles::ObstacleCell(const Coordinate &&coordinate){
   for (const Coordinate &_coordinate  : *_coordinates)
      if (_coordinate == coordinate)
         return true;
   
   return false;
}

int Obstacles::Count() const{
   return _coordinates->size();
}

std::vector<Coordinate> &Obstacles::GetCoordinates() const{
   return *_coordinates;
}