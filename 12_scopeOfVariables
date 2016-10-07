/**
 * This example code explain about scope of
 * variable using C++ language.
 * 
 * @author: Daniel Freire
 * @date: 03/17/2007
 * 
 * Note: In this example is called foo() function
 * 3 times to show the diference behaviors variables
 * global, local and static variable
 */

#include <iostream>

using namespace std;

int num_global = 12; //Global variable

void foo()
{
	int num = 10; //Local variable
	static int num_static = 1; //Static variable
	cout << "variavel local: " << num << endl;
	cout << "variavel global: " << num_global << endl;
	num_static++; //Static variable remains its value the each function call
	cout << "variavel estatica: " << num_static << endl;
	cout << endl;
}

int main(int argc, char *argv[])
{
	cout << "First function foo() call: " << endl;
	foo();
	cout << "Second function foo() call: \n" << endl;
	foo();
	cout << "Third function foo() call: \n" << endl;
	foo();
	return 0;
}
