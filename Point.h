
class Point
{
	public:
		double x,y;
	Point()
	{
		x=0;
		y =0;
	}
	
	Point(int _x, int _y)
	{
		x=_x;
		y=_y;
	}

	int getX();
	int getY();
	void setX(const int new_x);
	void setY(const int new_y);
	
};
