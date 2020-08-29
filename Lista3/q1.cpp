
#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;
/* CONDIÇÕES DE UM TRIANGULO
| b - c | < a < b + c
| a - c | < b < a + c
| a - b | < c < a + b
*/

int main(int argc, char const *argv[])
{
    int soma = 0;
    int a, b, c;
    cout<<"Digite valor pra A: "<<endl;
    cin >> a;
    cout<<"Digite valor pra B: "<<endl;
    cin >> b;
    cout<<"Digite valor pra C: "<<endl;
    cin >> c;

    /* verificando a existencia de um triangulo*/
    if((abs(b-c) < a  && (a < (b+c))) && (abs(a - c) < b && ( b < (a+c))) && (abs(a - b) < c && (c < (a + b)))){
        cout << "Eh um triangulo"<<endl;
        cout << "Agora vamos verificar que trangulo eh ..."<<endl;
        sleep(2);
        
        /* Triangulo Acuttangulo */
        if((b*c)/2 < 90){
            cout << "Eh um Triangulo Acutangulo"<<endl;
        }
        /* Triangulo Retangulo */
        else if((b*c)/2 == 90){
            cout << "Eh um Triangulo Retangulo"<<endl;
        }else{
            cout << "Eh um Tirangulo Obstusangulo"<<endl;
        }
        sleep(2);
        
    }else{
      cout << "Nao eh um triangulo"<<endl;  
    }
    
    

    return 0;
}
