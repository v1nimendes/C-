#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int N,i;
	
	cout<<"Quantos números serão lidos? "; cin>>N;
	int numero[N];
	
	for(i=0;i<N;i++)
	{
		cout<<"Digite o "<<i+1<<" número ";
		cin>>numero[i];
	}
	for(i=0;i<N;i++)
	{
		cout<<numero[i]<<"\t";
	}
	
}