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
	cout <<"Jack position: "<<maze.getPlayerPox()[0]<<maze.getPlayerPox()[1]<<endl;
	return 0;
}
