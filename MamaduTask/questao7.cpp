#include "questao7.h"
#include <iostream>
#include <cmath>

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
		if (( a % i ) == 0 && (b % i)== 0 ){
			cont = cont + 1;
		}

	}
    if (cont  == 1){
        return true;
    }

	return false;
}
