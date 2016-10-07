/**
 * This example code shows how to declare and
 * use a pointer variable
 *
 * @author: Daniel Freire
 * @date: 03/17/2007
 *
 * Note: To access the content of a pointer variable is 
 * done through asterik (*) operator and to accessing its
 * reference address is done through ampersand (&) opertor
 */

#include <iostream>

using namespace std;

void add2(int *pvar, int value)
{
	*pvar = *pvar + 2;
}

int main(int argc, char *argv[])
{
	int var = 10;
	int *pvar; //Pointer var
	pvar = &var; //Assigning the address of the var actual variable to pvar pointer
	
	int value = 2; // Value used to add with var variable

	//Printing the address stored in pvar variable as pointer content. Note that the address
	//stored in pvar variable is the same address that represent the actual var variable.
	cout << "Address stored in *pvar variable: " << pvar << endl;
	cout << "Address of the var variable: " << &var << endl;

	//Printing the value pointed of the *pvar (Is the same value stored in var variable)
	cout << "\nValue pointed by *pvar variable: " << *pvar << endl;

	//Change var value through pointer *pvar
	*pvar = *pvar + 10;
	cout << "\nThe new var value changed by pointer *pvar: " << var << endl;

	//Function to change value of var vabiable through *pvar pointer  
	add2(pvar, value);
	
	//Printing new value of var variable after add2() function
	cout << "\nNew value of var variable after add2() function call: " << var << endl;

	return 0;
}
