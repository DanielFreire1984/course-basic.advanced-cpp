/**
 * This file shows a TAD Stack using
 * C++ language.
 * @author: Daniel Freire
 * @date: 03/16/2007
 *
 * Note: Basically the file has a class
 * Stack with its own constructor and 
 * methods. One void function used to 
 * execute the Menu of the system.
 */

#include <iostream>

using namespace std;

class Stack
{
private:
	int *vet;		//Var used to store the stack value
	int tam_max;	
	int topo;		//Var used to index the stack top
public:
	//Stack constructor receiving the Stack length
	Stack(int length)
	{
		vet = new int[length];
		tam_max = length - 1;
		topo = -1;
	}
	~Stack()
	{
		delete[] vet;
	}
	//Push function to insert an item in stack
	void push(int value)
	{
		if(topo == tam_max)
			cout << "\nStack full!!!" << endl;
		else
			vet[++topo] = value;
	}
	//Pop function to remove an item from stack
	void pop()
	{
		if(topo == -1)
			cout << "\nStack Empty!!!" << endl;
		else
			topo--;
	}
	//Function to get the Stack top value
	void getTopo()
	{
		if(topo == -1)
			cout << "\nStack still empty!!!" << endl;
		else
			cout << "\nStack Top is: " << vet[topo] << endl;
	}
	//Function used to check if stack is empty
	int stackEmpty()
	{
		return (topo == -1);
	}
	void lengthStack()
	{
		if(topo == -1){
			cout << "\nStack Empty!!!" << endl;
			//return NULL;
		}
		else
			cout << "\nStack length is: " << topo + 1 << endl;
			//return topo;
	}
	void showStack()
	{
		if(topo == -1)
			cout << "\nStack Empty!!!" << endl;
		else{
			cout << "\nStack values is: " << endl;
			for(int i = topo; i >= 0; i--)
			{
				cout << vet[i] << endl;
			}
		}
	}
};
//Function Menu that returns the operation selected
int menu()
{
	int op = 0;
	cout << "\nType 1 to insert value on Stack." << endl;
	cout << "Type 2 to remove value on Stack." << endl;
	cout << "Type 3 to shows Stack." << endl;
	cout << "Type 4 to get topo value." << endl;
	cout << "Type 5 to get Stack length." << endl;
	cout << "Type 6 to EXIT." << endl;
	cout << endl;
	cout << "Set option here: ";
	cin >> op;
	return op;
}

int main(int argc, char *argv[])
{
	int length;
	cout << "Stack System\n" << endl;
	cout << "Set the Stack size: ";
	cin >> length;
	Stack s(length);
	int valor;
	int op = 0;
	while(op != 6)
	{
		op = menu();
		switch(op)
		{
		case 1:
			cout << "Type the value: ";
			cin >> valor;
			s.push(valor);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.showStack();
			break;
		case 4:
			s.getTopo();
			break;
		case 5:
			s.lengthStack();
			break;
		}
	}
	return 0;
}
