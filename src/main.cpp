#include <iostream>
#include <string>
#include "../lib/maze.h"
#include "../lib/maze.cpp"

#define RED "\e[0;31m"
#define GRN "\e[0;32m"

using namespace std;


int main()
{
	string pathFile;
	cout<< "Give the path of the file"<<endl;
	cin>>pathFile;
	Maze maze(pathFile);
	if(maze.getFlag()) {
		cout<<maze.getSize()<<endl;
		cout<<"Jack position: "<<maze.act_cell -> getPox()<<", "<<maze.act_cell -> getPoy()<<endl;
		int r = maze.resolve();
		if(r != -1){
			printf("%s%i",GRN "Number of steps: ", r);
		}
		else{
			printf("%s%i", RED "No way home\n",r);
		}
	}
	else{
		printf(RED "Out of range");
	}
	cout << "\n";
	maze.printMaze();
	return 0;
}
