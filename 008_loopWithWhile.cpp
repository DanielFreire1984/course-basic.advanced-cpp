/**
 * This file shows how to use comando while()
 * using C++ language. This example code 
 * perform score pairs number between a 
 * range informed by user
 * 
 * @author: Daniel Freire
 * @date: 03/16/2007
 */

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int num, i = 1, result = 0;
	
	cout << "How much pairs numbers?\n" << endl;
	
	cout << "Type here a number to start counting: ";
	cin >> num;
	cout << endl;
	
	// Command while
	while(i <= num){
		if (i % 2 == 0){
			cout << i << endl;
			result++;
		}
		i++;
	}
	cout << "\nThere are " << result << " pairs numbers until number " << num << endl;
	return 0;
}
