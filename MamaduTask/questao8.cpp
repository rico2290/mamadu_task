#include "questao8.h"
#include <iostream>
#include <cmath>

using namespace std;

float roots( float a, float b, float c){
    float delta, raiz_delta;

    delta = (pow(b, 2) - 4*a*c);

    if(delta >= 0){
        cout<<"Raiz x1 = "<<((-b + sqrt(delta))/2*a)<<endl;
        cout<<"Raiz x2 = "<<((-b - sqrt(delta))/2*a)<<endl;
    }else{
        delta = abs(delta);
        raiz_delta = sqrt(delta);
        cout<<"Raiz x1 = "<<((-b)/2*a)<< " + "<<((raiz_delta)/2*a)<<endl;
        cout<<"Raiz x2 = "<<((-b)/2*a)<< " + "<<((raiz_delta)/2*a)<<endl;

    }


}
