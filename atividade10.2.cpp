#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
	int N;
	
	cout<<"Qual a dimensao da Matriz? "; cin>>N;
		
	srand(time(NULL));	
	
	int matriz[N][N], L, C;
	float vetor[N], soma;
	
	for(L=0; L<N; L++)
	{
		soma=0;
		for(C=0; C<N; C++)
		{
			matriz[L][C]= rand() % 10;
			soma+=matriz[L][C];
		}
		vetor[L]= soma/N;
	}
	
	for(L=0; L<N; L++)
	{
		for(C=0; C<N; C++)
		{
			cout<<matriz[L][C]<<"\t";
		}
		cout<<"\t=\t"<<vetor[L]<<"\n";
		cout<<"\n";
	}
		
}