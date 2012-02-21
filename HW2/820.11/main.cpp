#include <iostream> 
using std::cout;
using std::cin;
using std::endl; 

#include "NameArray.h";

// at the bginning of our program, we define the functions
// that allow us to communicate with the user 
// assumes user does not know that arrays in C++ start at index 0
// and adjusts accordingly

// takes a number and an index from the user and updates 
// the list accoringly
void addNumberToList(NameArray * n) {
	float num;
	int index;
	cout << "Enter a number to add to the list: ";
	cin >> num;
	cout << "Enter the index to store the number: ";
	cin >> index;

	// check that the user is entering acceptable values
	if (index-1 < 0) {
		cout << "Only postive indices are allowed.\n";
		return;
	}

	// change the value in the list using the add funtion
	n->add(index-1, num);
}

// gets an index from the user and returns the value in that spot
void getNumberFromList(NameArray * n) {
	int index;
	cout << "Enter the index of the number you want: ";
	cin >> index;

	//checks that the user is entering positive indices
	// later we could add something that tells the user if their
	// indice is too large
	if (index-1 < 0) {
		cout << "Only postive indices are allowed.\n";
		return;
	}

	// shows the user the value 
	cout << ">> " << n->get(index-1) << endl;
} 

int main() {

	int length=-1;
	
	// get list length from user
	// keep asking for length until user enters a positive value	
	do {
		cout << "Type list length: ";
		cin >> length;

		if (length <=0) {
			cout << "Please enter a positive number\n";
		}
	} while (length <= 0);


	// create an instance of name array called n 
	// that has the user given length
	NameArray * n = new NameArray(length);

	// we'll need this for our menu
	bool quit=false;

	// create a menu for the user
	while (!quit) {
		int menuOption;

		cout << endl;
		cout << "Menu Options: \n";
		cout << "0. Quit Program\n";
		cout << "1. Print list\n";
		cout << "2. Add a number to the list\n";
		cout << "3. Get a number from the list\n";
		cout << "4. Print Highest Number in the list\n";
		cout << "5. Print Lowest Number in the list\n";
		cout << "6. Print Average of list\n";
		
		cout << "---------------------------------\n";

		cout << ": ";

		cin >> menuOption;

		// switch statemnts correspond to menu choices and behave
		// accordingly
		switch(menuOption) {
			case 0: 
				quit=!quit; //toggles quit so menu stops running
				break;
			case 1:
				n->print();
				break;
			case 2:
				addNumberToList(n);
				break;
			case 3: 
				getNumberFromList(n);
				break;
			case 4: 
				cout << "max >> " << n->max() << endl;
				break;
			case 5: 
				cout << "min >> " << n->min() << endl;
				break;
			case 6: 
				cout << "avg >> " << n->avg() << endl;
				break;
				
			default: 
				cout << "That is not an option" << endl;
				break;
		}
	}

	delete n;

	return 0;
}