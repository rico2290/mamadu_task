
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int cont = 0;
	int numero;
	cout<<"Digite um numero positivo: "<<endl;
	cin >> numero;
	numero = int(numero);
	while(numero >= 0 ){
		cont = cont +1;
		cout<<"Digite um numero positivo: "<<endl;
		cin >> numero;
		numero = int(numero);
		
	}
	cout<<"Foram digitados "<<cont<< " numeros positivos";
	return 0;
}