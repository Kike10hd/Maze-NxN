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
	this -> _matrix = (char **)malloc(this -> _size*sizeof(int *));
	for(int i = 0; i < this -> _size; i++){
		this -> _matrix[i] = (char *) malloc(this -> _size*sizeof(int *));
	}

	// Fill the matrix
	for(int row = 0; row < _size; row++){
		getline(file, line);
		for(int col = 0; col < _size; col++){
			this -> _matrix[row][col] = line[col];
			if(line[col] == '*'){
				// Initialize the player
				act_cell = new Cell(row, col, 0);
			}
		}
	}
}

int Maze::resolve(){
	add_move(act_cell -> getPox(), act_cell -> getPoy(),0);

	while(this -> myqueue.size() > 0){
		
		Cell aux = this -> myqueue.front();
		this -> myqueue.pop();
		
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

void Maze::add_move(int row, int col, int distance) {	
	if(this -> _matrix[row][col] != 'X'){
		Cell new_cell(row, col, distance);
		this -> myqueue.push(new_cell);
	}
}

//Getters
int Maze::getSize(){
	return this -> _size;
}

char** Maze::getMaze(){
	return this -> _matrix;
}

