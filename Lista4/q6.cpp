#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int fatorial (int n){
    if(n <= 1){
        return 1;
    }
	return fatorial(n-1)*n;
}

float fatorialS (int n) {
    if(n <= 1){
        return 1;
    }
	return float(float(fatorial(n-1)*n) /float(fatorial(n-2)*n));
}

int main(){
	int n;
	cout<<"Digite um numero positivo: ";
	cin >> n;
	n = int(n);
    std::cout<<"Fatorial de "<<n<<" eh "<<fatorialS(n)<<endl;



	std::cout<<"Fim do Programa "<<endl;
	return 0;
}