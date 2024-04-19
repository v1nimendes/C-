#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	int numero[5], i;
	
	for(i=0;i<5;i++)
	{
		cout<<"Digite o "<<i+1<<" número ";
		cin>>numero[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<numero[i]<<"\t";
	}
	
}