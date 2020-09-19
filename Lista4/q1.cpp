// Example program
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

float mapMark (int a, int b){
	return (float)(a + b) / 2;
}

int main(){
	int a, b;
	cout<<"Digite nota da AP1: ";
	cin >> a;
	a = int(a);
	cout<<"Digite nota da AP2: ";
	cin >> b;
	b = int(b);
	if (media(a, b) > 0 && media(a, b) <= 4.9)
	{
		std::cout<<"Conceito D "<<endl;
	}else if(media(a, b) > 5 && media(a, b) <= 6.9){
		std::cout<<"Conceito C "<<endl;
	}else if(media(a, b) > 7 && media(a, b) <= 8.9){
		std::cout<<"Conceito b "<<endl;
	}else{
		std::cout<<"Conceito A "<<endl;
	}



	std::cout<<"Fim do Programa "<<endl;
	return 0;
}