#include <iostream>
#include <cmath>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{

	/*
	cout<<float(375) / 500<<endl;
	cout<<((375) % (500))<<endl;
	cout<<(((375) % (500))/float(500)) <<endl;
	cout<<(((375) % (500))/float(500)) + (375 / 500)<<endl;
	*/

	int idade;
	float peso;
	int gota = 20;
	cout<<" ==== PESO ========"<<"======= DOSAGEM"<<endl; 
    cout<<"\b5 kg a 9 kg:                125 mg"<<endl; 
    cout<<"\b9,1 kg a 16 kg:             250 mg"<<endl; 
    cout<<"\b16,1 kg a 24 kg:            375 mg"<<endl; 
    cout<<"\b24,1 kg a 30 kg:            500 mg"<<endl; 
	cout<<"\bAcima de 30 kg:             750 mg"<<endl; 

	cout<<"Digite a sua idade: ";
	cin >> idade;
	idade = int(idade);

	cout<<"Digite seu peso: ";
	cin >> peso;
	peso = float(peso);

	if (idade < 1 && peso < 0)
	{
		cout<<"Dados invalidos";
	}else{
		/* 1000 mg */
		if (idade == 12 && peso >= 60)
		{
			
		/* 875 mg */	
		}else if (idade == 12 && peso < 60)
		{

		/* Crianças e adolescentes abaixo de 12 anos*/
		}else{
			
			if (peso >= 5 && peso <= 9)
			{
				float aux = 125 / 500;
				
				float axu_mod = 125 % (500);
				
				cout<<"Gotas a tomar: "<<((axu_mod)/float(500) + (aux*20))<<endl;

			}else if(peso >= 9.1 && peso <= 16.0){
				float aux = 250 / 500;
				
				float axu_mod = 250 % (500);
				
				cout<<"Gotas a tomar: "<<((axu_mod)/float(500) + (aux*20))<<endl;
			}else if (peso >= 16.1 && peso <= 24.0)
			{
				float aux = 375 / 500;
				
				float axu_mod = 375 % (500);
				
				cout<<"Gotas a tomar: "<<((axu_mod)/float(500) + (aux*20))<<endl;
			}else if (peso >= 24.1 && peso <= 30.0)
			{
				
				float aux = 500 / 500;
				
				float axu_mod = 500 % (500);
				
				cout<<"Gotas a tomar: "<<((axu_mod)/float(500) + (aux*20))<<endl;
			}else{
				float aux = 750 / 500;
				
				float axu_mod = 750 % (500);
				
				cout<<"Gotas a tomar: "<<((axu_mod)/float(500) + (aux*20))<<endl;
			}
			



		}
	}

	return 0;
}