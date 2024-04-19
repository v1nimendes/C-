#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int N, contador, a=0, b=0, c=0;
	double altura, soma=0, maior_altura=-1;
	string nome, maior_nome;

	cout<<"Quantos jogadores: "; cin>>N;
	
	for (contador=1;contador<=N;contador++)
	{
		cout<<"Jogador "<<contador<<" : "; cin>>nome;
		cout<<"Altura : "; cin>>altura;
		if (altura>=2.1)
		{
			cout<<"Categoria A\n"; a++;
		}
		else if (altura>=1.9)
		{
			cout<<"Categoria B\n"; b++;		
		}
		else
		{
			cout<<"Categoria C\n"; c++;		
		}		
		soma+=altura;		
		if (altura>maior_altura)
		{
			maior_altura=altura;
			maior_nome=nome;
		}		
	}	
	cout<<"% da categoria A: "<<a*100.0/N<<endl;
	cout<<"% da categoria B: "<<b*100.0/N<<endl;
	cout<<"% da categoria C: "<<c*100.0/N<<endl;
	cout<<"Média das alturas: "<<soma/N<<endl;
	cout<<maior_nome<<" é o jogador mais alto com "<<
	maior_altura<<"m.\n";
	
}