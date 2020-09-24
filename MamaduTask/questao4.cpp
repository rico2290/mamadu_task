#include "questao1.h"
#include <iostream>
//#include <string>
#include <cmath>

using namespace std;

bool isPrime (int n){

	int cont = 0;
	for (int i = n; i > 0; i--)
	{
		if ((n % i)== 0)
		{
			cont = cont +1;
		}
		if (cont >= 3)
		{
			return false;
		}
	}
	return true;


}
