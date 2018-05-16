/*
	Exemplo de ponteiro
	by: Jhonatan Oliveira Camargo
*/

#include <iostream>

using namespace std;

// Prototipação da função consoantes que pega a variavel da memoria do computador.
int contaConsoante(const char *);

main() {

	char frase[50];
	
	cout <<"Digite alguma coisa: ";
	gets(frase);
	
	cout <<"\nFrase: " << frase << endl;
	cout <<"Quantidade de consoantes: " << contaConsoante(frase) << endl;

	return 0;
}

100 92
x 60
/* 
	* - Aqui pega a variavel frase da memoria do computador e faz as comparações.
	* - Faz a comparação com letras maiusculas e minusculas, pois a função toupper,
	* - transforma a String em maiuscula, e só fazer a comparação.
*/
int contaConsoante(const char *frase) {
	
	int i = 0,
	    consoantes = 0;
	    
	while(frase[i] != '\0') {
		if(toupper(frase[i]) != 'A' && toupper(frase[i]) != 'E' && toupper(frase[i]) != 'I' && toupper(frase[i]) != 'O' && toupper(frase[i]) != 'U') {
			consoantes++;
		}
		i++;
	}
	
	return consoantes;
}
