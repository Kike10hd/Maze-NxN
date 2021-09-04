#include "./cell.h"

// Constructor
Cell::Cell(int pox, int poy, int distance){
	this -> _pox = pox;
	this -> _poy = poy;
	this -> _distance = distance;
}

//Getters
int Cell::getPox(){
	return this -> _pox;
}

int Cell::getPoy(){
	return this -> _poy;
}

int Cell::getDistance(){
	return this -> _distance;
}
