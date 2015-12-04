#include <iostream>
#include "point.h"
using namespace std;


int Point::getX()
{
	
	cout<< "El punto X es: "	;
	cout << x <<endl;
}

int Point::getY() 
{
	
	cout<< "El punto Y es: "	;
	cout << y <<endl;
}

void Point::setX(const int new_x)
{
	x=new_x;
}

void Point::setY(const int new_y)
{
	y=new_y;
}

int main()
{
	Point h;
	cout << "un punto h inicia en (0,0)"<< endl;
	h.getX();
	h.getY();
	cout << "un punto d q recibe parametros" <<endl;
	Point d(3,5);
	d.getX();
	d.getY();
	cout << "Cambia los valores del mismo punto d" <<endl;
	d.setX(4);
	d.getX();
	d.setY(25);
	d.getY();	
}
