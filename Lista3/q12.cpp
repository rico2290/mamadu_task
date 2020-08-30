#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int cont = 0;
	int numero;
	int soma = 0;

	
	bool verifica = true;
	while(verifica){
		cout<<"Digite um numero positivo: "<<endl;
		cin >> numero;
		numero = int(numero);
		if (numero > 0)
		{
			cont = cont +1;
			soma = soma + numero;
		}else{
			verifica = false;
		}
		
		
	}

	cout<<"Media dos numeros digitados "<<soma/cont<<endl;
	return 0;
}