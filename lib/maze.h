#ifndef Maze_h

#define Maze_h
#include <string>
#include "./player.h"
#include "./player.cpp"

using namespace std;

class Maze{
	private:
		int _size; //Size of the maze
		char ** _matrix; //The maze
		public:
		Player * jack; //The heroe in maze
		Maze(string pathFile); //Constructor
		//Getters
		int getSize();  
		char ** getMaze();
};

#endif
