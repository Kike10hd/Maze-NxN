#ifndef Player_h

#define Player_h 

class Player{
	private:
		int _pox; // Position in x
		int _poy; // Positions in y
		int _distance; // Distance to move to the out
	public:
		Player(int pox, int poy); // Constructor
		void walk(int x, int y); // walk and next posible cell
		//Getters
		int getPox(); 
		int getPoy();
		int getDistance();
};

#endif /* ifndef Player_h */
