#include "questao10.h"
#include <iostream>
#include <cmath>

using namespace std;

int tribonacci(int n){

    if(n <= 1){
        return 0;
    }else if(n == 2){
        return 1;
    }else{
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
}
