/**
 * This file demonstrate use for 
 * switch(case)command in C++ language
 * using a simple calculator system.
 * 
 * @author: Daniel Freire
 * @date: 03/16/2007
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float num1, num2, resultado;
	char op;
	
	cout << "CALCULATOR SYSTEM (+,-,*,/)\n" << endl;
	cout << "Type the first number: ";
	cin >> num1;
	cout << "Type the second number: ";
	cin >> num2;
	cout << "Choose one operation as following: +, -, *,/ " << endl;
	//Store result option in "op" variable
	cin >> op;
	//Selecting "op" result as typed by user
	switch(op){
		case '+': //If op == "+" will run the code bellow
			resultado = num1 + num2;
			break;
		case '-': //If op == "-" will run the code bellow
			resultado = num1 -  num2;
			break;
		case '*': //If op == "*" will run the code bellow
			resultado = num1 * num2;
			break;
		case '/': //If op == "/" will run the code bellow
			resultado = num1 / num2;
			break;
		//Default case used for any other result insert
		default:
			cout << "Operacao nao reconhecida!!!" << endl;
	}
	cout << "Resultado e: " <<  resultado << endl;
	return 0;
}