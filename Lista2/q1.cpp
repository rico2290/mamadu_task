#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int ano;
	cout<<"Digite o Ano: ";
	cin >> ano;
	ano = int(ano);

	if ((ano % 4)==0 && (ano % 100) != 100 || (ano % 400)==0)
	{
		cout<<"Ano bissexto";
	}else{
		cout<<"Ano nao eh bissexto";
	}
	return 0;
}