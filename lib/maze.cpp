//Libs to use 
#include <iostream>
#include <fstream>
#include "maze.h"

//Constructor
Maze::Maze(string pathFile){
	// Read the file 
	ifstream file(pathFile.c_str());
	string line;

	// Set the size of the matrix
	getline(file, line);
	this -> _size = stoi(line);

	// the minimum in n is 3 and the maximum is 99
	if(this -> _size > 2 && this -> _size < 100){ 

		// Set the matrix for the maze
		this -> flag = true;
		this -> _maze = (char **)malloc(this -> _size*sizeof(int *));
		for(int i = 0; i < this -> _size; i++){
			this -> _maze[i] = (char *) malloc(this -> _size*sizeof(int *));
		}


		// Fill the matrix
		for(int row = 0; row < _size; row++){
		getline(file, line);
		for(int col = 0; col < _size; col++){
			this -> _maze[row][col] = line[col];
			if(line[col] == '*'){
				// Initialize the player
				act_cell = new Cell(row, col, 0);
				}
			}
		}
	}else{
		this -> flag = false;
	}
}

//Resolve
int Maze::resolve(){
	add_move(act_cell -> getPox(), act_cell -> getPoy(),0);

	while(this -> _myqueue.size() > 0){
		
		Cell aux = this -> _myqueue.front();
		this -> _myqueue.pop();
		
		int row = aux.getPox();
		int col = aux.getPoy();
		int distance = aux.getDistance();


		if(row == 0 || row == this -> _size-1 ||
			 col == 0 || col == this -> _size-1) {
			return distance + 1;
		}
		add_move(row+1, col, distance+1);
		add_move(row-1, col, distance+1);
		add_move(row, col+1, distance+1);
		add_move(row, col-1, distance+1);
	}
	return -1;
}

//Add to the move
void Maze::add_move(int row, int col, int distance) {	
	if(this -> _maze[row][col] == '0' || this -> _maze[row][col] == '*') {
		Cell new_cell(row, col, distance);
		this -> _maze[row][col] = 'O';
		this -> _myqueue.push(new_cell);
	}
}

//Getters
int Maze::getSize(){
	return this -> _size;
}

char** Maze::getMaze(){
	return this -> _maze;
}

bool Maze::getFlag(){
	return this -> flag;
}

void Maze::printMaze(){
	for (int i = 0; i < this -> _size; ++i) {
		for(int j = 0; j < this -> _size; ++j){
			if(_maze[i][j] == '*'){
				printf("%s%c%s", YEW, this -> _maze[i][j],WHT);
			}
			else if (_maze[i][j] == 'O'){
				printf("%s%c%s", GRN, this -> _maze[i][j],WHT);
			}
			else if (_maze[i][j] == 'X'){
				printf("%s%c%s", RED, this -> _maze[i][j],WHT);
			}
			else{
				printf("%s%c%s", WHT, this -> _maze[i][j],WHT);
			}
		}
		cout<<"\n";
	}
}
