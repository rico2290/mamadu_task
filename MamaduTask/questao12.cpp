#include "questao12.h"
#include <iostream>
#include <cmath>

using namespace std;

int sumDigits(int n){
    int a, b;

    a = n%10;
    b = (n - a)/10;

    if(b <= 0){
        return a;
    }else{
    return a + sumDigits(b);
    }
}
