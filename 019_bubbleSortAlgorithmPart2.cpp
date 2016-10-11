/**
 * Part2: This file show a simple example
 * of the bubble sort algorithm
 * to sort a vector of classes in
 * C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/17/2007
 */

#include <iostream>
#include <string.h>
#define MAX 100 //Define MAX as constant value equal 100

using namespace std;

class Student
{
public:
	char name[50];
	char number[10];
};
//Function to Printing items inserted
void printingList(Student *s, int i)
{
	for(int j = 0; j <= i; j++)
	{
		cout << "Name: " << s[j].name << endl;
		cout << "Number: " << s[j].number << endl;
		cout << endl;
	}
}
//Function sort vector by name or by number passing the option through "typeSort" variable
void bubbleSort(Student *s, int i, int typeSort)
{
	Student aux;
	if(typeSort == 1){ //if "typeSort" variable = 1 sort by name
		for(int j = i; j >= 0; j--)
		{
			for(int k = 1; k <= j ; k++)
			{
				if(strcmp(s[k - 1].name, s[k].name) == 1){
					aux = s[k - 1];
					s[k - 1] = s[k];
					s[k] = aux;
				}
			}
		}
	}else{ // else "typeSort" variable = 2 sort by number
		for(int j = i; j >= 0; j--)
		{
			for(int k = 1; k <= j ; k++)
			{
				cout << s[k-1].number <<endl;
				cout << s[k].number <<endl;
				
				if(s[k-1].number < s[k].number){
					aux = s[k - 1];
					s[k - 1] = s[k];
					s[k] = aux;
				}
			}
		}	
	}
}

int main(int argc, char *argv[])
{
	Student students[MAX];
	int option, typeSort, i = 0;

	while(true)
	{
		cout << "Type the student name: ";
		cin >> students[i].name;
		cout << "Type the student register number: ";
		cin >> students[i].number;
		cout << "\nDO YOU MAKE A NEW REGISTER? 1-YES, 2-NO" << endl;
		cout << "Option: ";
		cin >> option;
		cout << endl;
		if(option != 1)
			break;
		i++;

	}

	cout << "\nPrinting list BEFORE bubble sort!\n" << endl;

	printingList(students, i);

	cout << "Choose order list method.  1- By Name, 2- By Number: " << endl;
	cout << "Option: ";
	cin >> typeSort;

	bubbleSort(students, i, typeSort);

	cout << "\nPrinting list AFTER bubble sort!\n" << endl;

	printingList(students, i);

	return 0;
}
