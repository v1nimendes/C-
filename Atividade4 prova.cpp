#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int A, B, C, V;

		cout<<"Informe o primeiro números: "; cin>>A;
		cout<<"Informe o segundo números: "; cin>>B;
		cout<<"Informe o terceiro números: "; cin>>C;
		V=A*B*C;
		if (A>B and B<C)
		{
			cout<<"A maior aresta é:"<< A;
		}
		else if (B>A and B>C)
		{
			cout<<"A maior aresta é:"<<B;		
		}
		else
		{
			cout<<"A maior aresta é:"<<C;		
		}		
}
