
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int soma = 0;
    cout<<"==== Programa soma dos cubicos no intervalo [1, 100] ===="<<endl;
    for(int i =1; i <=100; i++){
        if(pow(i,3) > 100){
            break;
        }
        cout << "Cubico: " << pow(i,3) << endl;
        soma = soma + pow(i,3);
    }
    cout << "Soma dos cubos: " << soma << endl;

    return 0;
}
