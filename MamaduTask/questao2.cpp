#include "questao2.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void perfeito (int n){

	int somaPerfeito = 0;
	for (int i = n-1; i > 0; i--)
	{
		if ((n % i)== 0)
		{
			somaPerfeito = somaPerfeito + i;
		}
	}
	 if (somaPerfeito == n ){

	 	cout<<" Par Perfeito "<<endl;
	}else{
		cout<<"Nao eh Par Perfeito "<<endl;
	}
}
