#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int A, B, C, V;

		cout<<"Informe o primeiro n�meros: "; cin>>A;
		cout<<"Informe o segundo n�meros: "; cin>>B;
		cout<<"Informe o terceiro n�meros: "; cin>>C;
		V=A*B*C;
		if (A>B and B<C)
		{
			cout<<"A maior aresta �:"<< A;
		}
		else if (B>A and B>C)
		{
			cout<<"A maior aresta �:"<<B;		
		}
		else
		{
			cout<<"A maior aresta �:"<<C;		
		}		
}
