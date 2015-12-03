#include "Point.h"

class Pointarray(){
private:
   int *start;
   int length;
public:
   Pointarray();
   Pointarray(const Point points[],const int size);
   Pointarray(const Pointarray &pv);
   ~Pointarray();
   void resize(int n);
   void push_back(const Point &p0);
   void insert(const int position, const Point &p);
   void remove(const int pos);
   const int getsize() const;
   void PointArray::clear();
};
