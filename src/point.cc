#include "point.h"

Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}

Point::Point(Point* b){
	x = b->x;
	y = b->y;
}

Point& Point::operator+=(const Point &b){
	x += b.x;
	y += b.y;
}

const Point Point::operator+(const Point &other){
	return Point(*this) += other;
}

void Point::addTo(int x, int y){
	this->x += x;
	this->y += y;
}