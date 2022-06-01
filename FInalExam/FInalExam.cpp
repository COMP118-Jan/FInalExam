/** file FinalExam.cpp
* \brief file with the main function
* \details This file will run the main menu of the application and all the functions will be stored there
* \author Jan Bogovic
* \version 0.1
* \date 01-06-2022
*/



#include <iostream>
#include <cassert>
using namespace std;

int choice;
double matrix[4][3];
double UserInputData;




void putDataInMatrix(double UserInputdata);

void printMatrix(double matrixToPrint[4][3]);

void negateAllElements(double matrixToBeNegated[4][3]);


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
			putDataInMatrix(UserInputData);
			cout << "\n Data sucessfully put in the matrix! \n ";

			break;
		case 2:
			negateAllElements(matrix);
			printMatrix(matrix);
			break;
		case 3:

			printMatrix(matrix);
			break;
		default:
			cout << "\n Please enter a valid choice! \n";
			break;
		}
		

	} while (choice != 4);

}


/**
* Function <code>putDataInMatrix</code> prints out all the data in the matrix
* @Param matrixToPrint the matrix that will be ptinted out
* <BR>
*/
void printMatrix(double matrixToPrint[4][3])
{
	//Testing pre-conditions
	assert(matrixToPrint);

	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << "[ " << matrixToPrint[0][j] << " ]";
		}
		cout << "[ " << matrixToPrint[i][0] << " ]" << "\n";
	}
}


/**
* Function <code>putDataInMatrix</code> prompts the user to imput the nessecary data in the matrix
* @Param UserInputdata data that the user will input and will be placed in the matrix
* <BR>
*/
void putDataInMatrix(double UserInputdata)
{
	//Testing pre-conditions
	assert(UserInputData == 0);
	
	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			cout << "\n Please input value for matrix in postition of " << "[ " << i << " ]" << " [ " << j << " ] : ";
			cin >> UserInputdata;
			if (UserInputdata > 5.5 || UserInputdata < -5.5)
			{
				cout << "Please input value less that 5.5 or bigger than -5.5 \n";
				j = j - 1;
			}
			else
			{
				matrix[i][j] = UserInputdata;

			}
		}
	}
}


/**
* Function <code>negateAllElements</code> reverses all the numbers inside the given matrix
* <BR>
* @Param matrixToBeNegated is the matrix that the function will negate
*/
void negateAllElements(double matrixToBeNegated[4][3])
{
	//Testing pre-conditions
	assert(matrixToBeNegated);

	for (int i = 0; i < 4; i++)
	{

		for (int j = 0; j < 3; j++)
		{
			
			matrixToBeNegated[i][j] = matrixToBeNegated[i][j] * -1;
		}
	}

}

