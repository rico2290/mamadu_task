// Example program
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

bool coPrimo (int a, int b){
	
	int cont = 0;

	//Variavel usada para evitar dois for
	int maior;
	if (a > b){
		maior = a;
	}else{
		maior = b;
	}

	for (int i = 1; i <= maior; i++){
		if (( a % i ) == 0 ){
			cont = cont + 1;
		}
		if(( b % i ) == 0){
		    cont = cont + 1;
		}
		//Um N primo só divide ele mesmo e 1. 
		if ((cont / 2) >= 3){
			return false;
		}
	}
	return true;


}

int main(){
	int A, B;
	cout<<"Digite A: ";
	cin >> A;
	A = int(A);

	cout<<"Digite B: ";
	cin >> B;
	B = int(B);

	if (coPrimo(A, B))
	{
		std::cout<<" Primos entre si "<<endl;
	}else{
		std::cout<<"Nao primos entre si "<<endl;
	}
   

	return 0;
}