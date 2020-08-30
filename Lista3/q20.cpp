
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int A, B, resultado = 1, cont = 0;
	cout<<"Digite um numero A: ";
	cin >> A;
	A = int(A);

	cout<<"Digite um numero B: ";
	cin >> B;
	B = int(B);
	cont = B;
	

	if (A == 0)	{
		resultado = A;
	}else if(A == 1){
		B = 1;
	}else if (B == 0){
		resultado = B;
		A =  1;
	}else if(B == 1){
			B = 0;
			resultado = A;
	}else{
		for (int i = 1; i <= B; i++){
			resultado = resultado * A;
		}
	}
	
	cout<< "Potencia "<<resultado;
	return 0;
}


