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
	char ** arr = maze.getMaze();
	for (int i = 0; i < maze.getSize(); ++i) {
		for (int j = 0; j < maze.getSize(); ++j) {
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
