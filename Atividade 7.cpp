#include<iostream>
using namespace std;

main()
{
	int A, B ,C;
	char resp;
	
	do
	{		
		cout<<"Digite o primeiro valor: "; cin>>A;
		cout<<"Digite o segundo valor: "; cin>>B;
		cout<<"Digite o terceiro valor: "; cin>>C;
		
		if(A + B > C && A + C > B && B + C > A)
	{
		cout<<"Os 3 lados formam um triangulo\n";
		if(A == B && A == C)
			cout<<"Equilatero\n";
		else
			if(A == B || A == C || B == C)
				cout<<"Isosceles\n";
		else
			cout<<"Escaleno\n";
	}
	else
	{
		cout<<"Os 3 lados nao formam um triangulo\n";
	}
	
	cout<<"Deseja avaliar outras medidas (S/N)? : "; cin>>resp;
	while (resp!='s' && resp!='S' && resp!='n' && resp!='N')
	{
		cout<<"Resposta invalida! Tecle S ou N.\n";
		cout<<"Deseja avaliar outras medidas (S/N)? : "; cin>>resp;
	}
	}while (resp=='s' || resp=='S');
}
