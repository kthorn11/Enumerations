// Smart Home Mode Controller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum HomeMode
{
	Home = 1,
	Away = 2,
	Night = 3,
	Vacation = 4

};

int main()
{
	int mode_input;

	cout << "Enter mode (1-Home, 2-Away, 3-Night, 4-Vacation):  ";
	cin >> mode_input;

	if (mode_input < 1 || mode_input > 4)
	{
		cout << "Invalid Input!";
		return 0;

	}

	HomeMode current_mode = (HomeMode)mode_input;

	switch (current_mode)
	{
	case Home:
		cout << "Home Mode: Normal settings activated. ";
		break;
	case Away:
		cout << "Away Mode: Security system armed.";
		break;
	case Night:
		cout << "Night Mode: Lights dimmed, doors locked. ";
		break;
	case Vacation:
		cout << "Vacation Mode: Energy saving + security enabled. ";
		break;

	}


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
