/**
 * Part 2:
 * This example code shows how to allocating
 * memory to a pointer with reserved-word "new"
 * and how to parse a pointer as a function 
 * parameter.
 *
 * @author: Daniel Freire
 * @date: 03/17/2007
 *
 */

#include <iostream>

using namespace std;

void fillVector(int *parray, int lenght)
{
	for(int i = 0; i < lenght; i++)
		//Every array name of a array variable works like a pointer.
		//However, it can be used as a pointer accessing its content like this
		*(parray + i) = i + 1;
}

void showArray(int *parray, int lenght)
{
	cout << "\nPrinting parray vector." << endl;
	for(int i = 0; i < lenght; i++)
		cout << *(parray + i) << endl;
}

int main(int argc, char** argv)
{
	int lenght;
	cout << "\nType the lenght of Vector: ";
	cin >> lenght;
	
	//Allocating memory with new reserved-word to a array pointer
	int *parray = new int[lenght];

	//Function to filling vector
	fillVector(parray, lenght);

	//Function to printing values from *parray[lenght]
	showArray(parray, lenght);
	
	return 0;
}
