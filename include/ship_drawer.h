//Asteroid Rodeo Wrangler eXtreme: Top-down physics-based asteroid mining mayhem
//Copyright 2012 Nathan Killeen
//
//This program is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef arwx_ship_drawer_h_
#define arwx_ship_drawer_h_

//This class is a set of static helper funtions.
//Do not declare a new ShipDrawer
class ShipDrawer{
	static void draw_ship(int x, int y, int size, double rotation_in_radian);
	static void draw_ship(int x, int y, int size, int rotation_in_degrees);
};
#endif