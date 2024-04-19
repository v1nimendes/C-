#include<iostream>
#include<string>
using namespace std;

// Sub-Programas
void Aprovados (bool candidatosAprovados[], int quantidadeDeCandidatos)
{
	int quantidadeAprovados = 0;
	int quantidadeReprovados = 0;

	cout << " \tTaxa de Aprovacao: " << endl << endl;

	for (int posicao = 0; posicao < quantidadeDeCandidatos; posicao++){
		if (candidatosAprovados[posicao] == true){
			quantidadeAprovados++;
		} else {
			quantidadeReprovados++;
		}
	}
	cout << "Quantidade de Aprovados: " << quantidadeAprovados << " | " << "Taxa de Aprovacao: " << (quantidadeAprovados*100.0) / quantidadeDeCandidatos << "%" << endl;
	cout << "Quantidade de Reprovados: " << quantidadeReprovados << " | " << "Taxa de Reprovacao: " << (quantidadeReprovados*100.0) / quantidadeDeCandidatos << "%" << endl;
	cout << endl;
	cout << "*------------------------------------------*" << endl;
}

void relatorioAprovados (int quantidadeDeCandidatos,string candidatos[], float notas[], bool candidatosAprovados[])
{
	cout << " \tRelatorio dos Aprovados: " << endl << endl;

	for (int posicao = 0; posicao < quantidadeDeCandidatos; posicao++){
		if (candidatosAprovados[posicao] == true){
			cout <<"Candidato: " << candidatos[posicao] << " Nota: " << notas[posicao] << endl;
		}
	}
	cout << endl;
	cout << "*------------------------------------------*" << endl;
}

void maiorNotaCandidatos (float notas[], int quantidadeDeCandidatos, string candidatos[])
{
	float maiorNota = 0.0;
	cout << " \tCandidatos com maior Nota: " << endl << endl;

	for (int posicao = 0; posicao < quantidadeDeCandidatos; posicao++){
		if (notas[posicao] > maiorNota){
			maiorNota = notas[posicao];
		}
	}
	cout << "A maior nota foi: " << maiorNota << endl;

	for (int posicao = 0; posicao < quantidadeDeCandidatos; posicao++){
		if (maiorNota == notas[posicao]){
			cout << "- " << candidatos[posicao] << endl;
		}
	}


}
// Programa Principal
main()
{
	int quantidadeDeQuestoes;
	int quantidadeDeCandidatos;


	cout << "Informe a quantidade de candidatos: "; cin >> quantidadeDeCandidatos;
	cout << "Informe a quantidade de questoes: "; cin >> quantidadeDeQuestoes;
	cout << endl;
	cout << "*------------------------------------------*" << endl;
	char respostas[quantidadeDeCandidatos][quantidadeDeQuestoes];

	char gabarito[quantidadeDeQuestoes];
	cout << " \tLeitura do Gabarito: " << endl << endl;

	for (int i = 0; i < quantidadeDeQuestoes; i++){
		cout << "Questao " << i + 1 << ": ";
		cin >> gabarito [i];
	}
	cout << endl;
	cout << "*------------------------------------------*" << endl;
	string candidatos[quantidadeDeCandidatos];
	cout << " \tLeitura do Candidato: " << endl << endl;

	for (int i = 0; i < quantidadeDeCandidatos; i++){
		cout << "Candidato " << i + 1 << ": ";
		cin >> candidatos [i];


		// Registrando Respostas dos Candidatos
		for (int questao = 0; questao < quantidadeDeQuestoes; questao++){
			cout << "Questao " << questao + 1 << ": ";
			cin >> respostas[i][questao];

		}
	}
	cout << endl;
	cout << "*------------------------------------------*" << endl;
	cout << " \tRespostas dos Candidatos: " << endl << endl;

	// Mostrando Lista de Candidatos e suas respostas
	for (int i = 0; i < quantidadeDeCandidatos; i ++){
		for (int j = 0; j < quantidadeDeQuestoes; j++){
			cout << candidatos[i] << ": " << "Questao " << j + 1 << ": " << respostas[i][j] << endl;

		}
	}
	cout << endl;
	cout << "*------------------------------------------*" << endl;
	const float notaMaxima = 10.0;
	float valorPorQuestao = notaMaxima / quantidadeDeQuestoes;
	float notas[quantidadeDeCandidatos];
	cout << " \tRelatorio Geral: " << endl << endl;


	// Calculando nota do candidato
	for (int candidato = 0; candidato < quantidadeDeCandidatos; candidato++){
		notas[candidato] = 0;
		// Registrando Respostas dos Candidatos
		for (int questao = 0; questao < quantidadeDeQuestoes; questao++){
			if (respostas[candidato][questao] == gabarito[questao]){
				notas[candidato] += valorPorQuestao;
			}
		}
	}

	// Mostrando as Notas dos Candidatos
	for (int i = 0; i < quantidadeDeCandidatos; i ++){
		for (int j = 0; j < quantidadeDeQuestoes; j++){
			cout << candidatos[i] << ": " << "Questao " << j + 1 << ": " << respostas[i][j] << endl;
		}
		cout << "A nota do Candidato " << candidatos[i] << " " << "Foi " << notas[i] << endl;
		cout << endl;
	}
	const float notaDeCorte = 5.0;
	bool candidatosAprovados[quantidadeDeCandidatos];
	// Verificando Candidatos Aprovados
	for (int candidato = 0; candidato < quantidadeDeCandidatos; candidato++){
		if (notas[candidato] >= notaDeCorte){
			candidatosAprovados[candidato] = true;
		} else{
			candidatosAprovados[candidato] = false;
		}
	}

	float soma = 0.0;
	float media = 0.0;
	// Calculando Média Geral
	for (int nota = 0; nota < quantidadeDeCandidatos; nota++){
		soma += notas[nota];
	}

	media = soma / quantidadeDeCandidatos;
	cout << "A media geral dos candidatos foi: " << media << endl << endl;

	cout << "*------------------------------------------*" << endl;

	// Verificando Quantidade de Aprovados e Reprovados
	 Aprovados(candidatosAprovados, quantidadeDeCandidatos);

	// Relatorio de Candidatos Aprovados
	 relatorioAprovados(quantidadeDeCandidatos, candidatos, notas, candidatosAprovados);

	// Candidatos com Maior Nota
	maiorNotaCandidatos (notas,quantidadeDeCandidatos,candidatos);


	cout << endl << "*------------------------------------------*" << endl;
	cout << " \tFIM DO PROGRAMA!! " << endl;


}
