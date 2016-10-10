/**
 * This file shows a basic example of the
 * how to building a class objectc in
 * C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/17/2007
 * 
 * Note: In this example is created a class
 * with three attributes name, cpf and age
 * as public attribute.
 */

#include <iostream>
#include <string.h>

using namespace std;

//Declaring a class person
class Person
{
//Declaring public attributes that any methods and others function out of
//Person class can access them
public:
	char name[100];
	char cpf[20];
	int age;
};

//Function to get age of a person
int getAge(Person people[], const char* name)
{
	int lenght = sizeof(people);

	for(int i = 0; i < lenght; i++)
	{
		if(strcmp(name, people[i].name) == 0)
			return people[i].age;
	}
	return -1;
}

int main(int argc, char *argv[])
{
	char name[100];
	
	Person people[3] =
	{
		{"joao", "11111111111", 30},
		{"maria", "11111111111", 20},
		{"pedro", "11111111111", 25},
	};
	
	cout << "Persons Registered: \n";
	cout << "name: " << people[0].name << endl;
	cout << "name: " << people[1].name << endl;
	cout << "name: " << people[2].name << endl;
	
	cout << "Type the name for search: ";
	cin >> name;

	int age = getAge(people, name);

	if(age != -1)
		cout << name << " " << "has " << age << " years old." << endl;
	else
		cout << "Person not found." << endl;

	return 0;
}
