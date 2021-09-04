#ifndef Cell_h

#define Cell_h

class Cell{
	private:
		int _pox; // Position in x
		int _poy; // Positions in y
		int _distance; // Distance to move to the out
	public:
		Cell(int pox, int poy, int distance); // Constructor
		//Getters
		int getPox(); 
		int getPoy();
		int getDistance();
};

#endif /* ifndef  Cell_h */
