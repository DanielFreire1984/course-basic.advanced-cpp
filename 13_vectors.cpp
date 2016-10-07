/**
 * This example code shows how to 
 * declare a string array using
 * C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/17/2007
 * 
 * Note: In this example code is declared
 * 3 vectors (e.g vector_[1,2,3]) showing 
 * three ways of how to assigment values
 * to them and how to accessing their content
 * from diferent ways.
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int i = 0;
  
	//Declaring a character vector (way 1)
	char vector_1[] = "Hello";
	cout << "Printing vector_1: " << vector_1 << endl;
  
	//Declaring a character vector (way 2)
	char vector_2[] = {'H', 'e', 'l', 'l', 'o', '\0'}; //The only way the compiler know if a string ended is marking with number 0 in the end of string
	cout << "Printing vector_2: " << vector_2 << endl;
  
	//Declaring a character vector (way 3)
	char vector_3[6]; //One index plus to store the '0' value in order to inform that string array is ended
	vector_3[0] = 'H';
	vector_3[1] = 'e';
	vector_3[2] = 'l';
	vector_3[3] = 'l';
	vector_3[4] = 'o';
	vector_3[5] = 0; //The only way the compiler know if a string ended is marking with number 0 in the end of string
	cout << "Printing vector_3: ";
	//Printing vector by index 
	while(vector_3[i] != 0) //While array vector diferent of character 0 it means that string no ended
	{
		cout << vector_3[i];
		i++;
	}
	return 0;
}
