#include "questao6.h"
#include <iostream>
#include <cmath>


int fatorial (int n){
    if(n <= 1){
        return 1;
    }
	return fatorial(n-1)*n;
}

float fatorialS (int n) {
    if(n <= 1){
        return 1;
    }
	return float(float(fatorial(n-1)*n) /float(fatorial(n-2)*n));
}
