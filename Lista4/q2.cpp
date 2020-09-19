// Example program
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

float perfeito (int n){
	
	int somaPerfeito = 0;
	for (int i = n-1; i > 0; i--)
	{
		if ((n%i)== 0)
		{
			somaPerfeito = somaPerfeito + i;
		}
	}
	cout<<"soma perfeito: "<<somaPerfeito<<endl;
	return somaPerfeito;
}

int main(){
	int N;
	cout<<"Digite um numero Positivo ";
	cin >> N;
	N = int(N);

	if (perfeito(N) == N )
	{
		std::cout<<N<<" Par Perfeito "<<endl;
	}else{
		std::cout<<"Nao eh Par Perfeito "<<endl;
	}


	return 0;
}