/**
 * This file show a simple example
 * of the bubble sort algorithm in
 * C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/17/2007
 * 
 */

#include <iostream>

using namespace std;

int menu()
{
	int option;
	do
	{
		cout << "\nType 1 to insert." << endl;
		cout << "Type 2 to sort the vector in ascending order." << endl;
		cout << "Type 3 to printing vector." << endl;
		cout << "Type 4 to exit." << endl;
		cout << "Option: ";
		cin >> option;
		if(option < 1 || option > 4)
			cout << "WARNING:: Option not valid!!!" << endl;
	}
	while(option < 1 || option > 4);
	return option;
}

void bubbleSort(int vector[], int lenght)
{
	int aux;
	for(int i = lenght; i > 0 ; i--)
	{
		for(int j = 1; j < lenght; j++)
		{
			if(vector[j] < vector[j - 1])
			{
				aux = vector[j];
				vector[j] = vector[j - 1];
				vector[j - 1] = aux;
			}
		}
	}
}

void printVector(int vector[], int lenght)
{
	cout << "Showing the vector.\n" << endl;
	for(int i = 0; i < lenght; i++)
	{
		cout << vector[i] << " ";
	}
	cout << endl;
}


int main(int argc, char *argv[])
{
	int option = 0;
	int i = 0;
	int lenght;
	cout << "Example Bubble Sort algorithm\n" << endl;
	cout << "Type the lenght vector: ";
	cin >> lenght;
	int vector[lenght];
	do
	{
		switch(option = menu())
		{
		case 1:
			if( i < lenght)
			{
				for(i = 0; i < lenght; i++)
				{
					cout << "Type the value " << i + 1 << "/" << lenght << " of the vector: ";
					cin >> vector[i];
				}
			}
			else
				cout << "Vector array reached the max lenght!" << endl;
			break;
		case 2:
			if(i == 0)
				cout << "\nVector is empty.\n" << endl;
			else
				bubbleSort(vector, lenght);
			break;
		case 3:
			if(i == 0)
				cout << "\nVector is empty.\n" << endl;
			else
				printVector(vector, lenght);
			break;
		case 4:
			break;			
		}
	}while(option != 4);
	return 0;
}
