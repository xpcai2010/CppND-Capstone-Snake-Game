#ifndef OBSTACLES_H
#define OBSTACLES_H

#include <vector>
#include <memory>

struct Coordinate
{
public:
   Coordinate(const int x, const int y) : xCoordinate(x), yCoordinate(y){};

   // Getters
   int getXCoordinate() const { return xCoordinate; }
   int getYCoordinate() const { return yCoordinate; }
   bool operator==(const Coordinate &coordinate) const
   {
      return (xCoordinate == coordinate.xCoordinate && yCoordinate == coordinate.yCoordinate);
   }

private:
   int xCoordinate;
   int yCoordinate;
};

class Obstacles {
 public:
    Obstacles();
    void AddCoordinate(const Coordinate &&coordinate);
    bool ObstacleCell(const Coordinate &&coordinate);
    int Count() const;
    std::vector<Coordinate> &GetCoordinates() const;

 private:
    std::unique_ptr<std::vector<Coordinate>> _coordinates;
};

#endif