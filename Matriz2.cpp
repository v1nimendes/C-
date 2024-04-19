#include<iostream>
using namespace std;

main()
{
	int vetor1[5]={0}; 
	for(int i=0; i<5; i++)
		cout<<vetor1[i]<<"\t";
		
		cout<<endl<<endl;
		
	int vetor2[5]={1,5,9,3,7};	
	cout<<endl<<endl;
	for(int i=0; i<5; i++)
		cout<<vetor2[i]<<"\t";
		
		cout<<endl<<endl;
		
	int matriz1[3][3]={1,2,3,4,5,6,7,8,9};
	cout<<endl<<endl;
	for(int L=0; L<3; L++)
	{
		for(int C=0; C<3; C++)
		cout<<matriz1[L][C]<<"\t";
		cout<<endl<<endl;
	}

}