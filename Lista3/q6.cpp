#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b,c;
	cout<<"Digite A: "<<"\n";
	cin >> a;
	cout<<"Digite B: "<<"\n";
	cin >> b;
	cout<<"Digite C: "<<"\n";
	cin >> c;
	a  = int(a);
	b = int(b);
	c = int(c); 

	if ((c - b) == (b-a))
	{
		cout<<" Eh uma Progressao Aritmetica";
	}else if ((b % a) == (c % b))
	{
		cout<<" Eh uma Progressao Geometrica";
	}else{
		cout<<" Nao eh  Progressao Aritmetica e nem eh Progressao Geometrica";
	}
	

	return 0;
}