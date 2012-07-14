/**
*Header for moving objects in our game. Will be extended by all moving things in game.
*
*By: Nathan Killeen
*/

#ifndef object__
#define object__

class Object: Static_Object{
	public:
		int vx, vy, vtheta;	//component velocity of object
		int nx, ny, ntheta;	//predicted coordinates. Used in collision handling.
		int ix, iy, itheta;	//component impulse on object (to reduce recalculation)
		unsigned float damping;//impulse against inertia
		unsigned int hardness;	//what jerk can it ignore?
	private:
	
	public:
		Object(int x, int y, int orientation, int mass, int radius, int hp, int hardness, Sprite sprite, int vx, int vy, int vtheta);	//constructor
		void shift_impulse(int ix, int iy);	//updates impulse by an amount	
		void tick();	//updates position 
	private:
		bool collide(Static_Object other);	//checks weather this collides with other
};

#endif