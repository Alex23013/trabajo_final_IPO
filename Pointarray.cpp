#include "Pointarray.h"

Pointarray::Pointarray(){
   *start=NULL;
   length=0;
}
Pointarray::Pointarray(const Point points[],const int size){
   Points *array= new Points[size];
   for(int i=0;i<size;i++){
      (array+i)->setX(points[i].getX());
      (array+i)->setY(points[i].getY());
   }
   start=array;
   length=size;
}
Pointarray::Pointarray(const Pointarray &pv){
   const int n=pv.getsize()
   Point *array=new Point[n];
   array=pv;
}
Pointarray::~Pointarray(){
   for(int i=0;i<length();i++){
      delete (arr+i);
   }
}

void Pointarray::resize(int n){
   Point arr=new Point[n];
}