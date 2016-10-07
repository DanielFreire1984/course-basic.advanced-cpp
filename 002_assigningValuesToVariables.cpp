/**
* This file shows how to assigning values 
* to variables C++ language.
* 
* @author: Daniel Freire
* @date: 03/16/2007
********************************************************************************
*                            TABLE VARIABLE RANGE                              *
********************************************************************************
* 	   TYPE				  LENGTH IN BYTES				    RANGE
* char							1						-127 a 127
* unsigned char					1						   0 a 255
* signed char					1						-127 a 127
* int							4				-2.147.483.648 a 2.147.483.647
* unsigned int					4					  0 a 4.294.967.295
* signed int					4				-2.147.483.648 a 2.147.483.647
* short int						2					  -32.768 a 32.767
* unsigned short int			2						 0 a 65.535
* signed short int				2					  -32.768 a 32.767
* long int						4				-2.147.483.648 a 2.147.483.647
* signed long int				4				-2.147.483.648 a 2.147.483.647
* unsigned long int				4					  0 a 4.294.967.295
* float							4				    Six digit precision
* double						8					Ten digit precision
* long double					10					Ten digit precision
*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
	char s = 'a'; 		// Character assignment
	int a = 4; 			// Interger number
	float b= 13.61; 	// Number in floating point double precision. Real numbers
	double pi = 3.14; 	// Number in floating point double precision
	
	cout << "Simple example to assignment values.\n" << endl;
	cout << "Printing character variable: " << s << endl;
	cout << "Printing interger number: " << a << endl;
	cout << "Printing real number: " << b << endl;
	cout << "Printing variable with double precision: " << pi << endl;

	return 0;
}
