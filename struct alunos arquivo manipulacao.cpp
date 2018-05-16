#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#define DIM 2

struct aluno
{
	int matricula;
	char nome [50];
	float nota1;
	float nota2;
	float media;
	
};

int main ()
{
	
	aluno ficha[DIM];
	int i;
	float maior;
	float menor;
	for (i=0; i<DIM; i++)
		{
		cout <<"digite a matricula do aluno: ";
		cin >> ficha[i].matricula;
		fflush(stdin);
		cout <<"digite o nome do aluno: ";
		cin >> ficha[i].nome;
		fflush(stdin);
		cout << "digite a nota do primeiro bimestre: ";
		cin >> ficha[i].nota1;
		fflush(stdin);
		cout <<"digite a nota do segundo bimestre: ";
		cin >> ficha[i].nota2;
		fflush(stdin);
		ficha[i].media =(ficha[i].nota1+ficha[i].nota2)/2;
		}
		ofstream escreve; /* objeto, onde começa a ser digitado dentro do arquivo .txt */
		escreve.open("nota.txt");
		for (i=0; i<DIM; i++)
			{	
				
				escreve << "matricula: " << endl; 
				escreve << ficha[i].matricula<< endl;
				escreve << "nome: " << endl; 
				escreve << ficha[i].nome<< endl;
				escreve << "media: "<< endl; 
				escreve << ficha[i].media<< endl;
				escreve << "a maior media e: " << endl;
				escreve << maior<< endl;
				escreve << "a menor media e: " << endl;
				escreve << menor<< endl;
				if (i==1)
				{
					menor = ficha[i].media;
					maior = ficha[i].media;
				}
				if (ficha[i].media >= maior)
				{
					maior = ficha[i].media;
				}
				
				if (ficha[i].media <= menor)
				{
					menor = ficha[i].media;
				}
				if (ficha[i].media >= 60)
				{
					escreve << endl << "Sua situacao e:" << endl;
					escreve << "Aprovado"<< endl;  
				}
				if (ficha[i].media <= 59)
				{
					escreve << endl << "Sua situacao e:" << endl;
					escreve << " Ridiculo"<< endl;
				}
				
		    }
				escreve.close();	
	system ("pause");
}

