/**
*Header for stationary objects in our game. 
*Will be extended by all other objects in game.
*
*By: Nathan Killeen
*/

#ifndef static_object__
#define static_object__

class Static_Object{
	public:
		int x, y;			//coordinates of center of object

		unsigned short int 
			mass,			//used for calculating effects of impulses and implies a gravitational field.
			radius,			//size in pixels from center
			orientation,	//0-355, degree the object is rotated.
			hp;				//total damage before breaking
	private:
		unsigned short int typeID;	//identifier for what class of object an object is. Used for proper typecasting. 
		Sprite sprite;		//sprite object representing this.
		
	public:
	private:
};

#endif