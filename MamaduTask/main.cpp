#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "questao1.h"
#include "questao2.h"
#include "questao3.h"
#include "questao4.h"
#include "questao5.h"
#include "questao6.h"
#include "questao7.h"
#include "questao8.h"
#include "questao9.h"
#include "questao10.h"
#include "questao11.h"
#include "questao12.h"
#include "questao13.h"



using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");



    //------------------- Q1
    /*
    int a, b;
	cout<<"Digite nota da AP1: ";
	cin >> a;
	a = int(a);
	cout<<"Digite nota da AP2: ";
	cin >> b;
	b = int(b);
    mapMark(a, b);
    */

    //--------------------- Q2
    /*
    int n;
	cout<<"Digite um numero positivo: ";
	cin >> n;
	n = int(n);
    perfeito(n);
    return 0;
    */

    //-------------------- Q3
	/*
	int n;
	cout<<"Digite um numero positivo pra sequencia de Collatz: ";
	cin >> n;
	n = int(n);
    collatz(n);
    */

    //------------------- Q4
    /*
    int n;
	cout<<"Digite um numero positivo: ";
	cin >> n;
	n = int(n);

	if(isPrime(n)){
        cout<<"o numero digitado eh primo"<<endl;
	}else{
	    cout<<"o numero digitado nao eh primo"<<endl;
	}
    */
	/* ------------------------- */

	    //-------------------- Q5
    /*
    cout << "Bem-vindo ao programa!" << endl;
    int l, m, t, k;
	float r;

	cout<<"Digite l: ";
	cin >> l;	l = int(l);

	cout<<"Digite r: ";
	cin >> r;	r = int(r);

	cout<<"Digite m: ";
	cin >> m;	m = int(m);

	cout<<"Digite t: ";
	cin >> t;	t = int(t);

	cout<<"Digite k: ";
	cin >> k;	k = int(k);
	double valor_parcela = pmt(l, r, m, t);

	cout<<"Valor Final: "<<valor_parcela<<endl;
	*/

	//------------------------ Q6
	/*
	int n;
	cout<<"Digite um numero positivo: ";
	cin >> n;
	n = int(n);
    std::cout<<"Fatorial S de "<<n<<" eh "<<fatorialS(n)<<endl;

	std::cout<<"Fim do Programa "<<endl;
	*/

	//----------------------- Q7
	/*
	int A, B;
	cout<<"Digite A: ";
	cin >> A;
	A = int(A);

	cout<<"Digite B: ";
	cin >> B;
	B = int(B);

	if (coPrimo(A, B))
	{
		std::cout<<"Primos entre si "<<endl;
	}else{
		std::cout<<"Nao sao primos entre si "<<endl;
	}
	*/
	/* -------------------------- */

    // -----------------Q8
    /*
    float a, b, c;
	cout<<"Digite A = ";
	cin >> a;
	a = float(a);
	cout<<"Digite B = ";
	cin >> b;
	b = float(b);
	cout<<"Digite C = ";
	cin >> c;
	c = float(c);

    roots(a, b, c);
    */

    //------------------------ Q9
    /*
    int x, y;
	cout<<"Digite inteiro X = ";
	cin >> x;
	x = int(x);
	cout<<"Digite inteiro Y = ";
	cin >> y;
	y = int(y);
	cout<<"Maximo divisor comum eh "<<mdc(x,y)<<endl;
    */

    //----------------------- Q10
    /*
    int n;
	cout<<"Digite inteiro positivo:  ";
	cin >> n;
	n = int(n);
	cout<<"N-ssimo termo da serie Tribonacci: "<<tribonacci(n)<<endl;
    */

    //------------------------- Q11
    /*
    int n;
	cout<<"Digite inteiro positivo:  ";
	cin >> n;
	n = int(n);
	cout<<"N-ssimo termo da serie Padovan: "<<padovan(n)<<endl;
	*/

	//----------------------- Q12
	/*
	int n;
	cout<<"Digite inteiro positivo:  ";
	cin >> n;
	n = int(n);
	cout<<"Soma dos digitos é: "<<sumDigits(n)<<endl;
    */

    //------------------------ Q13
    int n;
    cout<<"Digite inteiro positivo: ";
	cin >> n;
	n = int(n);
	cout<<"Número invertido: ";
	int result = invertido(n);
	cout<<endl;

	return 0;




}
