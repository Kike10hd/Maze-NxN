#ifndef Maze_h

#define Maze_h


#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define WHT "\e[0;97m"
#define YEW "\e[0;33m"

#include <string>
#include <queue>
#include "./cell.h"
#include "./cell.cpp"

using namespace std;

class Maze{
	private:
		int _size; //Size of the maze
		char ** _maze; //The matrix of maze
		queue<Cell> _myqueue;
		bool flag; // check is posible to solve
	public:
		Maze(string pathFile); //Constructor
		Cell * act_cell; //The heroe in maze
		int resolve();
		void add_move(int row, int column, int distance);
		//Getters
		int getSize();  
		char ** getMaze();
		bool getFlag(); 
		void printMaze();
};

#endif
