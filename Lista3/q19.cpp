
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cout<<"Digite um numero N: ";
	cin >> N;
	N = int(N);
	double aux = 0;
	
	for(int i = 1; i <= N; i++) {
		aux = aux + (float)1/i;
		cout<<aux<<endl;
    }
	return 0;
}



      