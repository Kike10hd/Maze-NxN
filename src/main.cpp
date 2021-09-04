#include <iostream>
#include "../lib/maze.h"
#include "../lib/maze.cpp"

using namespace std;


int main()
{
	string pathFile;
	cout<< "Give the path of the file"<<endl;
	cin>>pathFile;
	Maze maze(pathFile);
	cout<<maze.getSize()<<endl;
	cout<<"Jack position: "<<maze.act_cell -> getPox()<<", "<<maze.act_cell -> getPoy()<<endl;
	int r = maze.resolve();
	cout<<"Number of moves: "<<r<<endl;
	return 0;
}
