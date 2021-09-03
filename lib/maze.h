#ifndef Maze_h

#define Maze_h
#include <string>

using namespace std;

class Maze{
	private:
		int _size; //Size of the maze
		char ** _matrix; //The maze
		int playerPox[2]; //Initial position of player
		public:
		Maze(string pathFile); //Constructor
		//Getters
		int getSize();  
		int * getPlayerPox();
		char ** getMaze();
};

#endif
