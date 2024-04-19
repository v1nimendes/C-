#include<iostream>
#include<string>
#include<stdio.h>
#include <locale.h>
using namespace std;



main()
{
	setlocale(LC_ALL, "Portuguese");
	
	
	int N,contador=0, A=0, B=0, C=0;
	float Alt, Alt_Total, perc_A, perc_B, perc_C, media=0.0, soma=0.0, maior;
	string nome;
	
	cout<<"Informe a quantidade de Jogadores: ";
	cin>>N;


	while (contador<N)
	{
		cout<<"Nome do Jogador: ";
	
		cin>>nome;
	
		cout<<"Altura do Jogador: ";
		
		cin>>Alt;
		contador++;
		soma=soma+Alt;
		
		if (Alt >=2.10)
		{
			cout<<" Esta na categoria A \n";
			A++;
		};
		if (Alt>=1.90 and Alt<2.10)
		{
			cout<<" Esta na categoria B \n";
			B++;
		};
		if (Alt<1.90)
		{
			cout<<" Esta na categoria C \n";
			C++;
		};

		
	};
	media= soma/N;
	perc_A= A*100.0/N;
	perc_B= B*100.0/N;
	perc_C= C*100.0/N;
		
	cout << "O Percentual de jogadores na Categoria A eh de " << perc_A << " %";
	
	cout << "\nO Percentual de jogadores na Categoria B eh de " << perc_B << " %";
	
	cout << "\nO Percentual de jogadores na Categoria C eh de " << perc_C << " %";
	
	cout << "\nA media de altura dos jogadores eh: " << media;
	
}
