#include "questao1.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void mapMark (int a, int b){
    float media;
	media =  (float)(a + b) / 2;

	if (media > 0 && media <= 4.9)
	{
		cout<<"Conceito D "<<endl;
	}else if(media > 5 && media <= 6.9){
		cout<<"Conceito C "<<endl;
	}else if(media > 7 && media <= 8.9){
		cout<<"Conceito b "<<endl;
	}else{
		cout<<"Conceito A "<<endl;
	}

}
