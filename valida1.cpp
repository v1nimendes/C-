/* Validação de dados

Faça um programa para:
- Ler nome e duas notas;
- calcular e mostrar a média; e
- informar a situação (Aprovado/Reprovado). Obs.: aprovado: media>=6.
O programa deverá ser repetido até que o usuário responda N/n à pergunta "Deseja continuar?"

*/

#include<iostream>
using namespace std;

main()
{
	string nome;
	double n1, n2, m;
	char resposta;
	
	do
	{
		cout<<"Aluno : "; cin>>nome;
		
		// técnica 1
		do
		{
			cout<<"Nota 1: "; cin>>n1;
			if (n1>10 or n1<0)
			{
				cout<<"Nota inválida! Digite um valor de 0 a 10.\n";
			}
		} while(n1>10 or n1<0);
		
		// técnica 2
		cout<<"Nota 2: "; cin>>n2;
		while (n2>10 or n2<0)
		{
			cout<<"Nota inválida! Digite um valor de 0 a 10.\n";
			cout<<"Nota 2: "; cin>>n2;
		}
		
		m=(n1+n2)/2;
		
		if (m>=6) 	cout<<"Aprovado com a média "<<m<<endl;
		else 		cout<<"Reprovado com a média "<<m<<endl;
		
		// técnica 2
		cout<<"Deseja continuar (S/N)? "; cin>>resposta;
		while (resposta!='s' && resposta!='S' && resposta!='n' && resposta!='N')
		{
			cout<<"Resposta inválida! Tecle S ou N.\n";
			cout<<"Deseja continuar (S/N)? "; cin>>resposta;	
		}
			
	} while (resposta=='s' or resposta=='S');
	
}