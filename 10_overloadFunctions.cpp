/**
 * This example code shows how to use
 * overload functions.
 * C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/16/2007
 * 
 * Note: The 3 functions called add
 * has same name and diferent parameters
 */

#include <iostream>

using namespace std;
//Function with two parameters and same types
void add(int n1, int n2){
	cout << n1 + n2 <<endl;
}
//Function with three parameters and same types
void add(int n1, int n2, int n3){
	cout << n1 + n2 +n3 << endl;
}
//Function with two parameters and diferent types
void add(int n1, double n2){
	cout << n1 + n2 << endl;
}

int main(int argc, char** argv)
{
	//calling function with same name but diferent parameters
	add(1,2);
	add(1,2,3);
	add(1, 2.3);	
	return 0;
}


