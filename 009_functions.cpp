/**
 * This file shows a example of using
 * functions works in C++ language.
 *
 * @author: Daniel Freire
 * @date: 03/16/2007
 *
 * Note: This example code calculate the
 * total area for triangle and rectangle
 * shapes, parsing (int base, int height)
 * as parameters.
 */

#include <iostream>

using namespace std;

//Functions used
int menu(); //Return a option typed by user.
int calcRectangleArea(int base, int height); //This function receive 2 parameters and returns the total area for a rectangle shape.
int calcTriangleArea(int base, int height); //This function receiver 2 parameters and return the total area for equilateral triangle.

//Main function
int main(int argc, char *argv[])
{
	int option, base, height;
	while(option != 3)
	{
		option = menu();
		switch(option)
		{
		case 1:
			cout << "Type the rectangle base: ";
			cin >> base;
			cout << "Type the rectangle height: ";
			cin >> height;
			cout << "\nThe area for rectangle is: " << calcRectangleArea(base, height) << endl;
			break;
		case 2:
			cout << "Type the triangle base: ";
			cin >> base;
			cout << "Type the triangle height: ";
			cin >> height;
			cout << "\nThe area for triangle is: " << calcTriangleArea(base, height) << endl;
			break;
		case 3:
			break;
		default:
			cout << "\nInvalid option!!!" << endl;
		}
	}
	return 0;
}

//Menu functio used to select the option
int menu()
{
	int option;
	cout << "\nType 1 to calculate rectangle area." << endl;
	cout << "Type 2 to calculate equilateral triangle area." << endl;
	cout << "Type 3 to exit.\n" << endl;
	cout << "Option: ";
	cin >> option;
	return option;
}

//Function to calculate rectangle area
int calcRectangleArea(int base, int height)
{
	return base * height;
}

//Function to calculate triangle area
int calcTriangleArea(int base, int height)
{
	return (base * height)/2;
}
