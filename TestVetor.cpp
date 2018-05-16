#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

#define TAMANHO 100		//definição ate 99 caractere

int contaLetraA(const char * s); //Prototipo(declaração da função)

main () {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Definição para color Text
	char string[TAMANHO], substring[TAMANHO];
	
	SetConsoleTextAttribute(hConsole, 12);
	cout <<"========================================\n";
	cout <<"=           F E L I P E  A D S         =\n";
	cout <<"========================================\n" << endl;
	
	SetConsoleTextAttribute(hConsole, 15);
	cout <<"Entre com uma string: ";
	SetConsoleTextAttribute(hConsole, 11);
	cin.getline(string, TAMANHO);				//numero maximo de caractere 20, 
	SetConsoleTextAttribute(hConsole, 15);
	cout <<"Entre com outra string: ";
	SetConsoleTextAttribute(hConsole, 11);
	cin.getline(substring, TAMANHO);
	
	SetConsoleTextAttribute(hConsole, 15);
	cout << endl <<"STRING: [" << string <<"]" <<" TAMANHO: " << strlen(string) <<" QTD_LETRA_A: " << contaLetraA(string) << endl;
	cout <<"STRING: [" << substring <<"]" <<" TAMANHO: " << strlen(substring) <<" QTD_LETRA_A: " << contaLetraA(substring) << endl;	
	
	SetConsoleTextAttribute(hConsole, 14);
	system("PAUSE");
	SetConsoleTextAttribute(hConsole, 15);
	return 0;
}

int contaLetraA(const char * totalLetra) {		// função conta a letra A
	int i, num = 0;
	char letra[3] = "Aa";

	while (*totalLetra) {
		for (i = 0; i < 3; i++)
			if (*totalLetra == letra[i])
				num++;
		totalLetra++;
	}
	return num;
}
