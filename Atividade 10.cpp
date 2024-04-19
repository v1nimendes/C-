#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

main() 
{

   
	int N;
	cout<<"Quantos numeros serao lidos? "; cin>>N;
	
    srand(time(NULL));
    
	int L, C, soma, M[N][N], somaLinhas[N];
	
    for(L = 0; L < N; L++)
	{
        for(C = 0; C < N; C++){
            M[L][C] = rand() % 10;
        }
    }

    
    for(L = 0; L < N; L++){
        soma = 0;
        for(C = 0; C < N; C++){
            soma += M[L][C];
        }
        somaLinhas[L] = (soma) /N;
    }

    
    for(C = 0; C < N; C++)
	{
        soma = 0;
        for(L = 0; L < N; L++){
            soma += (M[L][C]);
        }
       
    }

	cout<<"\n";
	
    for(L = 0; L < N; L++)
	{
        for(C = 0; C < N; C++)
		{
           cout<<M[L][C]<<"\t";
           
        }
      cout<<endl<<endl;
    }

    cout<<"\n\nSoma das linhas:\n";
    for(L = 0; L < N; L++)
	{
        cout<<("Linha %d: %d\n", L, somaLinhas[L]);
        cout<<"\n";
    }



    return 0;
}
