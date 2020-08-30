#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int vegetariano = 180; int peixe = 230; int frango = 250; int carne = 350;
	int abacaxi = 75; int sorvete_dietetico = 110; int mouse_dietetico = 170; int mouse_chocolate = 200;
	int cha = 20; int suco_laranja = 70; int suco_melao = 100; int refrigerante_dietetico = 65;
    int total_caloria = 0;

    cout<<" ==== PRATO ========"<<"====== CALORIAS"<<endl; 
    cout<<"\b1 - Vegetariano:            180 cal"<<endl; 
    cout<<"\b2 - Peixe:                  230 cal"<<endl; 
    cout<<"\b3 - Frango:                 250 cal"<<endl; 
    cout<<"\b4 - Carne:                  350 cal"<<endl; 
    
    cout <<" Escolha um prato: ";
    int prato;
    cin >> prato;
    prato = int(prato);
    
    if (prato > 4 || prato < 1)
    {
    	cout <<"vc digitou opcao errada";
    }else{
    	if (prato == 1){
    		total_caloria = total_caloria + vegetariano;
    	}
    	if (prato == 2){
    		total_caloria = total_caloria + peixe;
    	}
    	if (prato == 3){
    		total_caloria = total_caloria + frango;
    	}
    	if (prato == 4){
    		total_caloria = total_caloria + carne;
    	}
    	cout <<"\n";

    	int sobremesa;
    	cout<<"Escolha uma  sobremesa: "<<endl;
	    cout<<" ==== SOBREMESA ===="<<"============= CALORIAS"<<endl; 
	    cout<<"\b1 - Abacaxi:                  		75 cal"<<endl; 
	    cout<<"\b2 - Sorvete dietético:             110 cal"<<endl; 
	    cout<<"\b3 - Mouse dietético:               170 cal"<<endl; 
	    cout<<"\b4 - Mouse chocolate:               200 cal"<<endl; 

	    cout<<"\n";
	    cout <<" Escolha uma opcao pra sobremesa: ";
	    cin >> sobremesa;
    	sobremesa = int(sobremesa);
    
	    if (sobremesa > 4 || sobremesa < 1)
	    {
	    	cout <<"vc digitou opcao errada";
	    }else{
	    	if (sobremesa == 1){
    		total_caloria = total_caloria + abacaxi;
    	}
    	if (sobremesa == 2){
    		total_caloria = total_caloria + sorvete_dietetico;
    	}
    	if (sobremesa == 3){
    		total_caloria = total_caloria + mouse_dietetico;
    	}
    	if (sobremesa == 4){
    		total_caloria = total_caloria + mouse_chocolate;
    	}
	    	cout<<"\n";
	    	int bebida;
	    	cout<<"Escolha uma  bebida: "<<endl;
		    cout<<" ==== BEBIDA ========"<<"============ CALORIAS"<<endl; 
		    cout<<"\b1 - Chá:                  		    20 cal"<<endl; 
		    cout<<"\b2 - Suco de laranja:               70 cal"<<endl; 
		    cout<<"\b3 - Suco de melão:                 100 cal"<<endl; 
		    cout<<"\b4 - Refrigerante dietético:        65 cal"<<endl; 

		    cout <<" Escolha uma opcao pra bebida: ";
		    cin >> bebida;
	    	bebida = int(bebida);
	    	if (sobremesa > 4 || sobremesa < 1)
		    {
		    	cout <<"vc digitou opcao errada";

		    }else{
		    	if (bebida == 1){
	    		total_caloria = total_caloria + cha;
		    	}
		    	if (bebida == 2){
		    		total_caloria = total_caloria + suco_laranja;
		    	}
		    	if (bebida == 3){
		    		total_caloria = total_caloria + suco_melao;
		    	}
		    	if (bebida == 4){
		    		total_caloria = total_caloria + refrigerante_dietetico;
		    	}
		    }
		    cout << "Calculando calorias ..."<<"\n";
		    sleep(2);
		    cout << "Total de Calorias a consumir: "<<total_caloria<<" cal"<<"\n";

		}
	}
	return 0;
}