#include "questao5.cpp"
#include <stdio.h>
#include <stdlib.h>
//#include <stdio.c> 


int main(){
	int l, m, t, k;
	float r;
	double valor_parcela;

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

	valor_parcela = pmt(l, r, m, t);
	cout<<"valor da parcela emprestimo: "<<valor_parcela<<endl;

	return 0;
}
