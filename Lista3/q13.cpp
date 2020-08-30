#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int numero;
	int cont = 0;

	
	bool verifica = true;
	while(verifica){
		cout<<"Digite um numero positivo: "<<endl;
		cin >> numero;
		numero = int(numero);
		if (numero > 0)
		{
			if (numero >= 100 && numero <= 200)
			{
				cont = cont + 1;
				
			}
		}
		else{
			verifica = false;
		}
		
		
	}

	cout<<"Quantidade de numeros entre 100 e 200 = "<<cont<<endl;
	return 0;
}