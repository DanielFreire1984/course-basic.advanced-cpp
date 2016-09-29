/**
 * This file shows how to use math operators
 * in C++ language.
 * @author: Daniel Freire
 * @date: 03/16/2007
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int result_1, num1 = 2, num2 = 4;
	double result_2, num3 = 4.5, num4 = 1.5;
	
	cout << "Math operators example\n" << endl;
	//Adding
	result_1 = num1 + num2;
	cout << num1 << " + " << num2 << " = " << result_1 << endl;
	//Subtration
	result_1 = num2 - num1;
	cout << num2 << " - " << num1 << " = " << result_1 << endl;
	//Multiplication
	result_2 = num3 * num4;
	cout << num3 << " x " << num4 << " = " << result_2 << endl;
	//Division
	result_2 = num3 / num4;
	cout << num3 << " / " << num4 << " = " << result_2 << endl;
	//remaining of division
	result_1 = num2 % num1;
	cout << num2 << " % " << num1 << " = " << result_1 << endl;
	
	return 0;
}