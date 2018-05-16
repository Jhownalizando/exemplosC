#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;
#define tam 5
struct tfila{
	int ini;
	int fim;
	int dados[tam];
};
tfila fila;
int op;

void mostrar_fila();
void entrar_fila();
void sair_fila();
void menu_fila();


int main(){
	setlocale(LC_ALL, "Portuguese");
	fila.fim = 0;
	fila.ini = 0;
	op= 1;
	while(op != 0){
		system("cls");
		mostrar_fila();
		menu_fila();
		cin >> op;
		switch (op){
			case 1:
				entrar_fila();
				break;
			case 2:
				sair_fila();
				break;
			Default:
      			cout <<"sair";
     			break;
			}
		}
	return (0);	
}

void sair_fila() {
	if (fila.ini == fila.fim) {
		cout << "\nFila vazia, mas logo aparece alguém!\n\n";
		system("pause");
}else {
	int i;
		for (i = 0; i < tam; i++) {
		fila.dados[i] = fila.dados[i+1];
	}
		fila.dados[fila.fim] = 0;
		fila.fim--;
	}
}

void entrar_fila(){
	if(fila.fim == tam){
		cout << "fila cheia\n";
		system("pause");
	}else{
		cout << "Digite o valor a ser enfileirado: ";
		cin >> fila.dados[fila.fim];
		fila.fim ++;
		}
	}
	
	
void menu_fila(){
	cout <<("Escolha uma opcao: \n");
	cout <<("1- Adicionar na fila.\n");
	cout <<("2- Retirar da fila\n");
	cout <<("0- Sair\n\n");
}
void mostrar_fila(){
	int i;
	cout << ("[");
	for(i=0; i <tam; i ++){
		cout << " " << fila.dados[i];
	}
	cout << ("]\n\n");
}
