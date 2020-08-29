
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;


int main()
{
    cout<<"Escolha uma  opcao pra viajar: "<<endl;
    cout<<" ==== DESTINOS ========"<<"====== IDA ======= IDA E VOLTA"<<endl; 
    cout<<"\b1 - Regiao Norte:          R$ 500,00       R$ 900,00"<<endl; 
    cout<<"\b2 - Regiao Nordeste:       R$ 350,00       R$ 650,00"<<endl; 
    cout<<"\b3 - Regiao Centro-Oeste:   R$ 350,00       R$ 600,00"<<endl; 
    cout<<"\b4 - Regiao Sudeste:        R$ 400,00       R$ 750,00"<<endl; 
    cout<<"\b5 - Regiao Sul:            R$ 300,00       R$ 550,00"<<endl;    
    
    int destino;
    cout<<"Digite uma opcao: "<<endl;
    cin >> destino;
    destino  = int(destino);
    
    if (destino> 5 || destino < 1)
    {
        cout<<"Opcao Invalida "<<endl;
    }else{
        cout<<"Digite:  0 -> Para Ida ou 1 -> Para Ida e Volta:"<<endl;
        int opcao;
        cin >> opcao;
        opcao = int(opcao);
        if (opcao > 1 || opcao < 0)
        {
            cout<<"Vc nao digitou uma opcao valida "<<endl;

        }else{
            if (opcao == 0)
            {
                if (destino == 1){
                    cout<<"So Ida: R$ 500,00"<<endl;
                }
                else if (destino == 2 || destino == 3)
                {
                    cout<<"So Ida: R$ 350,00"<<endl;
                }
                else if (destino == 4)
                {
                    cout<<"So Ida: R$ 400,00"<<endl;
                }
                else{
                    cout<<"So Ida: R$ 300,00"<<endl;
                }
            }
            if (opcao == 1)
            {
                if (destino == 1){
                    cout<<"Ida & Volta: R$ 900,00"<<endl;
                }
                else if (destino == 2)
                {
                    cout<<"Ida & Volta: R$ 650,00"<<endl;
                }
                else if (destino == 3)
                {
                    cout<<"Ida & Volta: R$ 600,00"<<endl;
                }
                else if (destino == 4)
                {
                    cout<<"Ida & Volta: R$ 750,00"<<endl;
                }
                else{
                    cout<<"Ida & Volta: R$ 500,00"<<endl;
                }
            }
            
        }
    }
    
    return 0;
}
