#include "questao13.h"
#include <iostream>
#include <cmath>

using namespace std;

int invertido(int n){

    if(n == 0){
        return 0;
    }else{
        cout<< (n%10);
        n = n /10;
        return invertido(n);


    }
    return 0;
}
