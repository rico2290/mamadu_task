#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int posicao_inicial;
	int velocidade_inicial;
	int aceleracao;
	int posicao_final = 0;

	int tempo = 0;

	cout<<"Posicao inicial: "<<endl;
	cin >> posicao_inicial;
	posicao_inicial = int(posicao_inicial);

	cout<<"Velocidade inicial: "<<endl;
	cin >> velocidade_inicial;
	velocidade_inicial = int(velocidade_inicial);

	cout<<"Aceleracao: "<<endl;
	cin >> aceleracao;
	aceleracao = int(aceleracao);
	while(tempo!= 30){

		tempo = tempo +1;
		posicao_final = posicao_inicial + (velocidade_inicial*tempo)+(1/2)*aceleracao*pow(tempo,2);
			
	}

	cout<<"Posicao Final "<<posicao_final<<endl;
	return 0;
}