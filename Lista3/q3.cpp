#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int placa, mes_atual;

	cout<< "digite o mes atual: ";

	cin >> mes_atual;
	mes_atual = int(mes_atual);
	if ((mes_atual > 12 ) || (mes_atual < 1))
	{
		cout << "Mes invalido "<<endl;
	}else{
		
		cout<< "digite a placa do veiculo: ";
		cin >> placa;
		placa = int(placa);
		
		if ((placa % 10) == mes_atual){
			cout << "IPVA do veiculo vence no mes corrente ";
		}
		else if (((placa % 10) + 10) == mes_atual)
		{
			cout << "IPVA do veiculo vence no mes corrente ";
		}
		else{
			cout << "IPVA do veiculo nao vence no mes informado "<<endl;
		}
	}
	
	
	return 0;
}