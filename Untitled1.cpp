#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

main()
{
	int M[5][5], L, C;
	srand(time(NULL));
	
	for(L=0; L<5; L++)
	{
		for(C=0; C<5;C++)
		{
			M[L][C] = (rand()%10+1)*10;
		}
	}
	
	for(L=0; L<5; L++)
	{
		for(C=0; C<5;C++)
		{
			cout<<M[L][C]<<"\t";
		}
		cout<<endl;
	}
}