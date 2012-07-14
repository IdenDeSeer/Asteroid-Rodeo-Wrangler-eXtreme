#ifndef __alleg_polygon
#define __alleg_polygon

#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

class Poly{
	public:
		Poly(vector<Point> vectors, al_map_rgb color);
		void draw();
		void rotate(short int dr);	//degrees to spin from now.
		void move(int dx, int dy);	//pixels to shift.
	private:
	
	public:
	private:
		vector<Point> original;	//used to make sure the shape doesn't distort over repeated precision loss.
		vector<Point> rotated;	//prevents as many trig calls.
		int rotation;			//tracks current rotation. Is modified by rotate().
		al_map_rgb color;
};

#endif