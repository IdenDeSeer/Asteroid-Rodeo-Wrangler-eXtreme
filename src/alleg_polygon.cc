#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

using namespace std;

/*	private:
vector<point> original;	//used to make sure the shape doesn't distort over repeated precision loss.
vector<point> rotated;	//prevents as many trig calls.
int rotation;			//tracks current rotation. Is modified by rotate().
*/


public Poly::Poly(vector<point> vectors, al_map_rgb color){
	original = vector<points>(vectors);
	rotated = original = vector<points>(vectors);
	rotation = 0;
	this.color = al_map_rgb(color);
}

public void draw(){
	
}

public void rotate(short int dr);	//degrees to spin from now.
public void move(int dx, int dy);	//pixels to shift.