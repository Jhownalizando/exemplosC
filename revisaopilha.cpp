#include <iostream>
#include <locale.h>
using namespace std;
#define tam 5
struct tpilha{
	int ini;
	int fim;
	int dados[tam];
};
tpilha pilha;
int op;

void mostrar_pilha();
void entrar_pilha();
void sair_pilha();
void menu_pilha();


int main(){
	setlocale(LC_ALL, "Portuguese");
	pilha.fim = 0;
	pilha.ini = 0;
	op= 1;
	while(op != 0){
		system("cls");
		mostrar_pilha();
		menu_pilha();
		cin >> op;
		switch (op){
			case 1:
				entrar_pilha();
				break;
			case 2:
				sair_pilha();
				break;
			}
		}
	return (0);	
}

void sair_pilha(){
	if(pilha.ini == pilha.fim){
		cout << "Pilha vazia\n";
		system("pause");
	}else{
		pilha.dados[pilha.fim-1] = 0;
		pilha.fim --;
	}
}

void entrar_pilha(){
	if(pilha.fim == tam){
		cout << "pilha cheia\n";
	}else{
		cout << "Digite o valor a ser empilhado: ";
		cin >> pilha.dados[pilha.fim];
		pilha.fim ++;
		}
	}
	
	
void menu_pilha(){
	cout <<("Escolha uma opcao: \n");
	cout <<("1- Adicionar na pilha.\n");
	cout <<("2- Retirar da pilha\n");
	cout <<("0- Sair\n\n");
}
void mostrar_pilha(){
	int i;
	cout << ("[");
	for(i=0; i <tam; i ++){
		cout << " " << pilha.dados[i];
	}
	cout << ("]\n\n");
}
