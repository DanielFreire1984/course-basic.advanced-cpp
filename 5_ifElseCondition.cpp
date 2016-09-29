/**
 * This file shows control
 * flow using if and else 
 * C++ language.
 * @author: Daniel Freire
 * @date: 03/16/2007
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int a, b, result;
	
	cout << "Type a number: ";
	cin >> a;	// "cin" is function from <iostream> lib used to store a value.
	
	cout << "Type other number: ";
	cin >> b;
	
	cout << "\nYou typed the numbers " << a << " and " << b  << endl;
	
	cout << "\nType the result " << a << " + " << b << " here: ";
	cin >> result;
	
	// If your result is correct then is printed "Correct Answer!!!". Else will be
	// printed "Wrong Answer!!!"
	
	if((a+b) == result)
		cout << "\nCorrect answer!!!" << endl;
	else
		cout << "\nWrong answer!!!" << endl;
	return 0;
}