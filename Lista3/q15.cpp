#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int numero;
	cout<<"Digite um numero : "<<endl;
	cin >> numero;
	numero = int(numero);

	while(numero!= 0){

	if ((numero % 3) == 0 && (numero % 5)== 0 )
		{
			cout<<"Multiplo de 3 e 5 = "<<numero<<endl;
		}
	numero = numero -1;
	}
	return 0;
}