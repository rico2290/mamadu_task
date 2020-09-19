// Example program
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

bool isPrime (int n){
	
	int cont = 0;
	for (int i = n; i > 0; i--)
	{
		if ((n%i)== 0)
		{
			cont = cont +1
		}
		if (cont >=3)
		{
			return false
		}
	}
	return true


}

int main(){
	int N;
	cout<<"Digite um numero Positivo ";
	cin >> N;
	N = int(N);

	if (isPrime(N))
	{
		std::cout<<N<<" Numero eh Primo "<<endl;
	}else{
		std::cout<<"Numero nao eh primo "<<endl;
	}


	return 0;
}