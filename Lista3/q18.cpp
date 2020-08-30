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

	for (int i = 1; i < numero; i++){
		if ((numero % i) == 0 ){
				cout<<i<< " eh divisor de "<<numero<<endl;
		}
	}

	return 0;
}