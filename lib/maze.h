#ifndef Maze_h

#define Maze_h
#include <string>

using namespace std;

class Maze{
	private:
		int _size; //size of the maze
		char **_matrix; // the maze
		public:
		Maze(string pathFile); //Constructor
		//Getters
		int getSize();  
		char** getMaze();
};

#endif
