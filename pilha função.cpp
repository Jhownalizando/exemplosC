#include <iostream>
#include <locale.h>

using namespace std;

// constantes
#define tam 5

	// estrutura pilha
	struct tpilha{
		int ini = 0;
		int fim = 0;
		int dados[tam];
	};
	//Variáveis globais
		tpilha pilha;
		int op;
	//Protipação
		void pilha_entrar();
		void pilha_sair();
		void pilha_mostrar();
		void menu_mostrar();
		
	//função principal
	int main(){
	setlocale(LC_ALL, "Portuguese");// acerta problema de acentuação na hora da compilação
	op = 1;
	pilha.ini = 0;
	pilha.fim = 0;
	while(op != 0){
		system("cls");// limpa as informações da tela
		pilha_mostrar();
		menu_mostrar();
		cin >> op; // recebe o novo valor da op desejada
		switch (op){
			case 1:
				pilha_entrar();
				break;
			case 2:
				pilha_sair();
				break;
			}
		}
		return (0);
	}
	//função para empilhar na pilha
	void pilha_entrar(){
		if(pilha.fim == tam){
			cout << ("Pilha cheia, impossivel empilhar mais\n");
			system("pause");
		}else{
			cout << ("Digite o numero a ser empilhado: ");
			cin >> (pilha.dados [pilha.fim]);
			pilha.fim ++;
		}
	}	
	//função para retirar da pilha
	void pilha_sair(){
		if(pilha.ini == pilha.fim){
			cout << ("Pilha vazia, impossivel retirar mais\n");
			system("pause");
		}else{
			pilha.dados[pilha.fim -1] = 0;
			pilha.fim --;
		}
	}
	//função para mostrar
	void pilha_mostrar(){
		int i;
		cout << ("[");
		for(i = 0 ; i < tam ; i++){
			cout << " " << pilha.dados[i];
		}
		cout << ("]\n\n");
	}
	//função menu
	void menu_mostrar(){
		cout << ("Escolha uma opção: \n");
		cout << ("Para adicionar um valor - 1\n");
		cout << ("Para retirar um valor - 2\n");
		cout << (" Para sair - 0\n\n");
	}
	
