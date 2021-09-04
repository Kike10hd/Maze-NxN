#ifndef Maze_h

#define Maze_h
#include <string>
#include "./cell.h"
#include "./cell.cpp"
#include <queue>

using namespace std;

class Maze{
	private:
		int _size; //Size of the maze
		char ** _matrix; //The maze
		queue<Cell> myqueue;
	public:
		Maze(string pathFile); //Constructor
		Cell * act_cell; //The heroe in maze
		int resolve();
		void add_move(int row, int column, int distance);
		//Getters
		int getSize();  
		char ** getMaze();
};

#endif
