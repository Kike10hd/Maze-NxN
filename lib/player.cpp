#include "./player.h"

// Constructor
Player::Player(int pox, int poy){
	this -> _pox = pox;
	this -> _poy = poy;
	this -> _distance = 0;
}

// Walk
void Player::walk(int x, int y){
	this -> _pox = x;
	this -> _poy = y;
	this -> _distance = this -> _distance+1;
}

//Getters
int Player::getPox(){
	return this -> _pox;
}

int Player::getPoy(){
	return this -> _poy;
}

int Player::getDistance(){
	return this -> _distance;
}
