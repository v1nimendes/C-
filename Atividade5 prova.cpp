#include<iostream>
using namespace std;

main()
{
	int contador=10;
	
	while(contador>=0)
	{
		cout<<contador;
		cout<<"\n";
		contador = contador -1;
		if (contador<=-1)
		{
			cout<<"\nFogo!!";
		}
	}
}

