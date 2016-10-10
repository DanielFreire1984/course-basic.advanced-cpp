/**
 * This file shows how to grouping
 * datas using struct in C++ language.
 *
 * @author: Daniel Freire
 * @date: 03/17/2007
 *
 * Note: This example using "typedef"
 * reserved-word to name the struct
 */

#include <iostream>

using namespace std;

typedef struct Pessoa
{
private:
	int idade;

public:
	Pessoa(int idade);

	void setIdade(int idade)
	{
		this->idade = idade;
	}

	int getIdade()
	{
		return idade;
	}
}Pessoa;

Pessoa::Pessoa(int idade)
{
	this->idade = idade;
}

int main(int argc, char *argv[])
{
	Pessoa p(20);

	cout << p.getIdade() << endl;
	return 0;
}
