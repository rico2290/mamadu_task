#include "questao3.h"
#include <iostream>
#include <cmath>

using namespace std;

int collatz(int n){
    int somaCollatz = 0;

    while(n != 1){
        cout<< n << " ";
        somaCollatz = somaCollatz + n;

        //se ímpar
        if( n & 1){
            n = 3*n + 1;

        }else{
            n = n/2;

        }
    }
    ;
    cout<< n <<endl;
    cout<< somaCollatz <<endl;
    return somaCollatz;


}
