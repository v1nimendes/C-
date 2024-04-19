#include <iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
main()
{
	int N;
  
	cout<<"Quantas posiçoes serao lidas? "; cin>>N;
	int V[N], i;
	
  	
	for (i = 0; i < N; i++)
		V[i]=(i+1)*(i+1);
	
	for (i = 0; i < N; i++)
		cout<<V[i]<<"\t";
}