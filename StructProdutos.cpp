/* 
Desenvolver uma struct produto com os seguintes campos
codigo, nome, peso, valor, data_de_fabricação, lote, data_de_validade.

criar um menu para incluir, alterar, consultar e imprimir os registros
da estrutura.
*/

#include <iostream>
using namespace std;

// Constante
//#define SIZE 1

// Estrutura do produto
struct Produto{
	
	int codigo;
	char nome[50];
	float peso;
	char dataFabricacao[10];
	char dataValidade[10];
	int lote;
};

main() {
	
	int SIZE = 1;
		
	// Apelido de Produto(estrutura) para ficha.
	Produto ficha[SIZE];
	
	// Indice for
	int i, operacao, inserir;
	
	while (true) {
		
		// Menu
		cout << endl <<"1 - Incluir | 2 - Alterar | 3 - Consultar | 4 - Sair" << endl << endl;
		cout <<"Digite a opcao Desejada: ";
		cin >> operacao;
		
		// Incluir
		if (operacao == 1) {
			
			cout <<"Deseja incluir quantos Produtos: ";
			cin >> inserir;
			
			// for para armazenar dados
			for (i = 0; i < SIZE; i++) {
				cout << endl <<"Digite o codigo: ";
				cin >> ficha[i].codigo;
				fflush(stdin);
				cout <<"Digite seu nome: ";
				cin.getline(ficha[i].nome, 50);
				fflush(stdin);
				cout <<"Digite o peso: ";
				cin >> ficha[i].peso;
				fflush(stdin);
				cout <<"Data de fabricacao: ";
				cin >> ficha[i].dataFabricacao;
				fflush(stdin);
				cout <<"Data de validade: ";
				cin >> ficha[i].dataValidade;
				fflush(stdin);
				cout <<"Lote: ";
				cin >> ficha[i].lote;
				fflush(stdin);
			}
		}
		
		// Alterar
			
		// Consultar
		if (operacao == 3) {
		
		// For para imprimir
			for (i = 0; i < SIZE; i++) {
				cout << endl <<"Codigo: " << ficha[i].codigo << endl;
				cout <<"Nome: " << ficha[i].nome << endl;
				cout <<"Peso: " << ficha[i].peso << endl;
				cout <<"Data Fabricacao: " << ficha[i].dataFabricacao << endl;
				cout <<"Data Validade: " << ficha[i].dataValidade << endl;
				cout <<"Lote: " << ficha[i].lote << endl;
			}
		}
		
		// Sair
		if (operacao == 4) {
			break;
		}
	}
	
	system("PAUSE");
	
	return 0;
}

/* void Imprimir(ficha imprima) {
	cout <<"Codigo: " << imprima.codigo;
	cout <<"Nome: " << imprima.nome;
	cout <<"Peso: " << imprima.peso;
	cout <<"Data Fabricacao: " << imprima.dataFabricacao;
	cout <<"Data Validade: " << imprima.dataValidade;
	cout <<"Lote: " << imprima.lote;
} */
