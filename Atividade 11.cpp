#include<iostream>
using namespace std;

void tela (string nome, string outroNome)
{
	cout<<nome << endl;
	cout<<outroNome << endl;
	cout<<"\t*---------------------------------------*\n";
	cout<<"\t*------------GEOMETRIA PLANA------------*\n";
	cout<<"\t*---------------------------------------*\n";
	cout<<"\t*MENU PRINCIPAL-------------------------*\n";
	cout<<"\t*---------------------------------------*\n";
	cout<<"\t*1. QUADRADO----------------------------*\n";
	cout<<"\t*2. TRIANGULO---------------------------*\n";
	cout<<"\t*3. CIRCUNFERENCIA----------------------*\n";
	cout<<"\t*4. SAIR--------------------------------*\n";
	cout<<"\t*---------------------------------------*\n";
	system("pause");	
}

 void quadrado()
{    
    int lado, area;
    system("cls");
    cout<<"CALCULO DO QUADRADO"<<endl<<endl;
    cout<<"Digite o lado do quadrado: "; cin>>lado;
    area = lado * lado;
    cout<<"A Area do quadrado e "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}

void triangulo()
{    
    int base, alt, area;
    system("cls");
    cout<<"CALCULO DO TRIANGULO"<<endl<<endl;
    cout<<"Digite a base: "; cin>>base;
    cout<<"Digite a altura: "; cin>>alt;
    area = (base*alt)/2;
    cout<<"A Area do triangulo e "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}

void circunferencia()
{    
   	float raio, area, pi= 3.14;
    system("cls");
    cout<<"CALCULO DA CIRCUNFERENCIA"<<endl<<endl;
    cout<<"Digite o raio: "; cin>>raio;
    area = pi * raio * raio;
    cout<<"A Area do circunferencia e "<<area<<endl<<endl;
    cout<<"Aperte qualquer para voltar ao menu principal"<<endl;
    system("pause");
}


main()
{
	
 //tela();

	int resp, x=1;
	
	while(x==1)
	{
		tela();
		cout<<"Escolha uma funcao ";cin>>resp;
		if(resp==1){
			quadrado();
		}
		else if(resp==2){
			triangulo();
		}
		else if(resp==3){
			circunferencia();
		}
		else if(resp==4){
			cout<<"O programa sera finalizado...";
			x=0;
		}

	}
	
}
