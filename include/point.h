#ifndef __point
#define __point

class Point{
	int x, y;
	
	Point(int x,int y);
	Point(Point* b);
	
	
	Point& operator+=(const Point &rhs);
	const Point operator+(const Point &other);
	void addTo(int x, int y);
};

#endif