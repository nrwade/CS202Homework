#include <iostream> 
using namespace std; 

#include "NameArray.h";

void addNumberToList(NameArray * n) {
	float num;
	int index;
	cout << "Enter a number to add to the list: ";
	cin >> num;
	cout << "Enter the index to store the number: ";
	cin >> index;

	if (index-1 < 0) {
		cout << "Only postive indices are allowed.\n";
		return;
	}

	n->add(index-1, num);
}

void getNumberFromList(NameArray * n) {
	int index;
	cout << "Enter the index of the number you want: ";
	cin >> index;
	if (index-1 < 0) {
		cout << "Only postive indices are allowed.\n";
		return;
	}
	cout << ">> " << n->get(index-1) << endl;
} 

int main() {
	// Grab the length from the user
	int length=-1;	
	do {
		cout << "Type list length: ";
		cin >> length;

		if (length <=0) {
			cout << "Please enter a positive number\n";
		}
	} while (length <= 0);


	NameArray * n = new NameArray(length);

	bool quit=false;


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

		switch(menuOption) {
			case 0: 
				quit=!quit;
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

	delete [] n;

	return 0;
}