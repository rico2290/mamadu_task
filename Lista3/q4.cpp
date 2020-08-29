#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int vegetariano = 180; int peixe = 230; int frango = 250; int carne = 350;
	int abacaxi = 75; int sorvete_dietetico = 110; int mouse_dietetico = 170; int mouse_chocolate = 200;
    cout<<"Escolha uma  opcao: "<<endl;
    cout<<" ==== PRATO ========"<<"====== CALORIAS"<<endl; 
    cout<<"\b1 - Vegetariano:            180 cal"<<endl; 
    cout<<"\b2 - Peixe:                  230 cal"<<endl; 
    cout<<"\b3 - Frango:                 250 cal"<<endl; 
    cout<<"\b4 - Carne:                  350 cal"<<endl; 
    
    /*
    int prato;
    cin >> prato;
    prato = int(prato);
    */
	
	return 0;
}