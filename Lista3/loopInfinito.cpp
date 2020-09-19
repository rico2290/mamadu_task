// Example program
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

float media (int a, int b){
	return (a + b)/2
}
int main()
{
	

	int n;
	int aux =0;
	cout<<"Digite um N: "<<endl;
	cin >> n;
	n = int(n);
	aux = n;
	
	do {
	cout<<"Digite um N: "<<endl;
	cin >> aux;
	aux = int(aux);

	}while((aux - n)!= 1 && ((aux - n) < 2));


	std::cout<<"Fim do Programa "<<endl;
	return 0;
}

/*
http://cpp.sh/42ady
*/