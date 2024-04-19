/*
Gerar a sequência crescente de números inteiros do menor até o maior de dois de dois 
números (A e B) lidos.
Obs.: só pode utilizar uma única estrutura de repetição.
Ex.: 
3 e 7. Saída: 3 4 5 6 7
8 e 5. Saída: 5 6 7 8 

*/

#include<iostream>
using namespace std;

main()
{
	int A, B, aux;
	
	cout<<"Valor 1: "; cin>>A;
	cout<<"Valor 2: "; cin>>B;
	
	if (A>B)
	{
		aux=A;
		A=B;
		B=aux;
	}
	
	for (;A<=B;A++)
		cout<<A<<" ";
	
}