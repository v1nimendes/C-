#include<iostream>
#include<string>
using namespace std;

main()
{
	int N, i;
	
	cout<<"Informe a quantidade de alunos da turma: "; cin>>N;
	
	float n1[N], n2[N], media[N], media_turma;
	string nome[N];
	int soma;
	
	for(i=0;i<N;i++)
	{
		cout<<"Informe o nome do aluno: "; cin>>nome[i];
		cout<<"Informe a primeira nota: "; cin>>n1[i];
		cout<<"Informe a segunda nota: "; cin>>n2[i];
		
		media[i]=(n1[i]+n2[i])/2;
		
		cout<<"A sua media foi: "<<media[i]<<endl;
	
	}
	for(i=0;i<N;i++)
	{
		cout<<"Aluno: "<<nome[i] <<"\t | Nota 1: " <<n1[i] << "\t | Nota 2: " <<n2[i] << "\t | Media: " << media[i] <<"\n";
		if(media[i]>=6) cout<<"Aprovado\n";
		else cout<<"Reprovado";
	}
	media_turma = soma/N;
	cout<<"\nMedia da turma: "<<media_turma<<endl;
	
	cout<<"\nRelatorio acima da media da turma"<<endl;
	cout<<"Nome\tMedia\n";
	cout<<"-------------------\n";
	for(i=0;i<N;i++)
	{
		if (media[i]>=media_turma)
		cout<<nome[i]<<"\t"<<media[i]<<endl;
	}
}