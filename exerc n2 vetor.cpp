#include <iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
main()
{
	int N;
  
	cout<<"Quantas posiçoes serao lidas? "; cin>>N;
	int fib[N]={0,1},i;
	
	for (i=2;i<N;i++)
		fib[i]=fib[i-1]+fib[i-2];
	
	for (i=0;i<N;i++)
		cout<<fib[i]<<"\t";
}