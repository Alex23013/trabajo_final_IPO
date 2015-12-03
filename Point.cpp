#include "Point.h"

Point::Point(){
   x=0;
   y=0;
}

Point::Point(int _x, int _y){
   x=_x;
   y=_y;
}

int Point::getX() const {
   return x;
}

int Point::getY() const {
   return y;
}

void Point::setX(const int new_x){
   x=new_x;
   return;
}

void Point::setY(const int new_y){
   y=new_y;
   return;
}
