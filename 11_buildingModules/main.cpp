/**
 * This file shows how to create modules.
 * In this example is created module called 
 * myMath and his header file in
 * C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/17/2007
 */

#include <iostream>
#include "myMath.h" //including the owner math module

using namespace std;

int main(int argc, char *argv[])
{
	int option;
	float side, height, base;
	cout << "Type 1 to calculate square area." << endl;
	cout << "Type 2 to calculate triangle area." << endl;
	cout << "Type 3 to calculate  rectangle area." << endl;
	cout << "Type option: ";
	cin >> option;
	switch(option){
		case 1: 
			cout << "Type the value of square side: ";
			cin >> side;
			cout << "The square area is: " << areaQuad(side) << endl;
			break;
		case 2:
			cout << "Type the value of triangle base: ";
			cin >> base;
			cout << "Type the value of triangle height: ";
			cin >> height;
			cout << "The triangle area is: " << areaTrianguleEqui(base, height) << endl;
			break;
		case 3:
			cout << "Type the value of rectangle base: ";
			cin >> base;
			cout << "Type the value of rectangle height: ";
			cin >> height;
			cout << "The rectangle area is: " << areaRectangule(base, height) << endl;
			break;
	}
	return 0;
}
