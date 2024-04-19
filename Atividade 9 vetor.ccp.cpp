#include <iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
main()
{
	int i, N;
  
	cout<<"Quantos numeros serao lidos? "; cin>>N;
	int numero[N];
  	srand (time(NULL));
  	
  for (i = 0; i < N; i++)
  {
    
    cout<<(rand() % 11);
    cout<<"\t";
  }
 
  return 0;
}