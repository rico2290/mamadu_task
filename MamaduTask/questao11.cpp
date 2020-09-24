#include "questao11.h"
#include <iostream>
#include <cmath>

using namespace std;

int padovan(int n){
    int antDoant = 1, ant = 1, atual = 1, prox =1;
    if(n <= 2){
        return 1;
    }else{
        for(int i=3; i<=n;i++){
            prox = antDoant + ant;
            antDoant = ant;
            ant = atual;
            atual = prox;
        }
        return prox;
    }
}
