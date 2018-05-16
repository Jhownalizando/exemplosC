#include <iostream>
#include <stdio.h>
using namespace std;

// constante
//#define SIZE 1

// Declaração da estrutura
struct Produto {
	int codigo;
	char nome[50];
	float peso;
	float valor;
	char validade[10];
	char dataFabricacao[10];
	int lote;
};

main() {	
	int i, SIZE = 1;
	char saida = 'a';
	
	Produto ficha[SIZE];
	
	while (true) {
		for (i = 0; i < SIZE; i++) {
			cout <<"Digite o codigo do produto: ";
			cin >> ficha[i].codigo;
			fflush(stdin);
			cout <<"Digite o nome do Produto: ";
			cin.getline(ficha[i].nome, 50);		// função que pega nome completo
			fflush(stdin);
			cout <<"Digite peso: ";
			cin >> ficha[i].peso;
			fflush(stdin);
			cout <<"Digite o valor: ";
			cin >> ficha[i].valor;
			fflush(stdin);
			cout <<"Digite a validade: ";
			cin >> ficha[i].validade;
			fflush(stdin);
			cout <<"Digite data de fabricacao: ";
			cin >> ficha[i].dataFabricacao;
			fflush(stdin);
			cout <<"Digite o lote: ";
			cin >> ficha[i].lote;
			fflush(stdin);
		}
		
		cout <<"\nDeseja continuar a = continua, b = sair: ";
		cin >> saida;
		
		if (saida != 'a') {
			cout <<"\nFim...\n";
			break;
		}

		SIZE += 1;
	}
	
	for (i = 0; i < SIZE; i++) {
		cout <<"\nCODIGO: " << ficha[i].codigo << endl;
		cout <<"PRODUTO: " << ficha[i].nome << endl;
		cout <<"PESO: " << ficha[i].peso << endl;
		cout <<"VALOR: " << ficha[i].valor << endl;
		cout <<"VALIDADE: " << ficha[i].validade << endl;
		cout <<"DATA FABRICACAO: " << ficha[i].dataFabricacao << endl;
		cout <<"LOTE: " << ficha[i].lote << endl;
		cout <<"SIZE: " << SIZE;
	}
	
	return 0;
}
