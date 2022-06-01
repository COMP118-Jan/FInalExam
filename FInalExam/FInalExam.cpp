/** file FinalExam.cpp
* \brief file with the main function
* \details This file will run the main menu of the application and all the functions will be stored there
* \author Jan Bogovic
* \version 0.1
* \date 01-06-2022
*/



#include <iostream>
using namespace std;

int choice;

/**
* Function <code>main</code> main function that will run the code
* <BR>
*/
int main()
{
	cout << "\n 1) Enter data in matrix (range -5.5 to 5.5) ";
	cout << "\n 2) Negate all elements (i.e. if an element is -5 => 5, or element is 5 => -5) ";
	cout << "\n 3) Show data in matrix ";
	cout << "\n 4) Exit ";

	do
	{
		cout << "\n Please enter a choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Hello World!\n";
			break;
		case 2:
			cout << "Hello World!\n";
			break;
		case 3:
			cout << "Hello World!\n";
			break;
		default:
			break;
		}
		

	} while (choice != 4);
}

