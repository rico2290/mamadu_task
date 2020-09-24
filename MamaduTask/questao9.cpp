#include "questao9.h"
#include <iostream>
#include <cmath>

using namespace std;

int mdc(int x, int y){
    if(x < y){
        return mdc(y, x);
    }else{
        if(x %y == 0){
            return y;
        }else{
            return mdc(y, x%y);
        }
    }
}
