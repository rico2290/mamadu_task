// Example program
#include <iostream>

#include <math.h> 
#include <stdio.h> 
#include <unistd.h>
#include "questao5.h"

using namespace std;

float pmt (int l, int r, int m, int t ){
	int i = 0;
	i = float (r/m);
    cout<<(l * i)/(1 - pow((1 + i),-(m*t)))<<endl;
	return float ((l * i)/(1 - pow((1 + i),-(m*t))));
}

float balanco(int r, int m, int t, int k){
	int i = 0;
	i = float (r/m);
    
	return float(r * ((1 - (float) pow((1 + i),(-(m*t-k))))/ i));
}

