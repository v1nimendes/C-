#include <iostream>
using namespace std;

void tela ()
{
	cout<<"\n";
	cout<<"\t-------------------------------------------\n";
	cout<<"\t--------------CAIXA ELETRONICO-------------\n";
	cout<<"\t-------------------------------------------\n";
	cout<<"\t----1. SACAR-------------------------------\n";
	cout<<"\t----2. RECARREGAR--------------------------\n";
	cout<<"\t----3. SAIR--------------------------------\n";
	cout<<"\t-------------------------------------------\n";
	cout<<"\n";
	
}

const int NUM_NOTAS = 7;
int notas[NUM_NOTAS] = {2, 5, 10, 20, 50, 100, 200};
int quantidades[NUM_NOTAS] = {10, 10, 10, 10, 10, 10, 10};
const int LIMITE_NOTAS = 200;

void recarregar() 
{
  for (int i = 0; i < NUM_NOTAS; i++) 
  {
    cout << "Quantidade de notas de "<<notas[i] << " reais: ";
    int quantidade;
    cin >> quantidade;
    if (quantidade + quantidades[i] > LIMITE_NOTAS) 
	{
      cout << "Erro: limite de notas excedido.\n";
    } 
	else 
	{
      quantidades[i] += quantidade;
      cout << "Notas de "<<notas[i]<< " reais recarregadas com sucesso.\n";
    }
  }
}

void sacar() 
{
  cout << "Digite o valor a ser sacado: ";
  int valor;
  cin >> valor;

  
  int resto = valor;
  for (int i = NUM_NOTAS - 1; i >= 0; i--) 
  {
    while (resto >= notas[i] and quantidades[i] > 0)
	{
      resto -= notas[i];
      quantidades[i]--;
    }
  }

  if (resto == 0) 
  {
    cout << "Retirada realizada com sucesso.\n";
  } 
  else 
  {
    cout << "Erro: valor solicitado não pode ser fornecido pelo caixa eletrônico.\n";
  }
  system("pause");
}

int main() 
{
	//tela();
	int resp, x=1;
	
  while (x=1) 
  {
   tela();
	cout<<"Escolha uma funcao ";
	
    
    cin >> resp;

    if (resp == 1) 
	{
      sacar();
    }
	else if (resp == 2) 
	{
      recarregar();
    } 
	else 
	{
		break;
      x=0;
    }
  }

  return 0;
}
