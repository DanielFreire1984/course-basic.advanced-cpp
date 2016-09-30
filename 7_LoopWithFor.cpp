/**
 * This file shows how to use the Loop
 * control flow using for(incial, checking, increment)
 * command in C++ language.
 * 
 * This example will caculate factorial of N number
 * constraints  0 <= N
 * 
 * @author: Daniel Freire
 * @date: 03/16/2007
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num, fat = 1;
	cout << "Function to calculare factorial of a number.\n" << endl;
	cout << "Type a number: ";
	cin >> num;
	
	//Loop with for() to calculate the factorial number
	for(int i = 1; i < num ; i++)
		fat = fat * (i + 1);
	
	if(num >=0)
		cout << "\nThe factorial of " << num << "number is : " << fat << endl;
	else
		cout << "\nNegative number!!! Type a positive number." << endl;
	
	return 0;
}