#include <iostream>
using namespace std;
#define DIM 2
main()
{
	int matriz[DIM][DIM];
	int linha, coluna, soma=0, media=0, par=0, impar=0;
	
	//escrevendo a matriz após declarar as variaveis.
	
		for (linha = 0; linha < DIM; linha ++)
			{
				for (coluna = 0; coluna < DIM; coluna ++)
				{
				cout << "digite um numero; ";
				cin >> matriz[linha][coluna];
				soma = soma + matriz[linha][coluna];
				media = soma/(DIM*DIM);
			if (matriz[linha][coluna] % 2 == 0)
			{
				par = matriz[linha][coluna];
			}
			if (matriz[linha][coluna] % 2 != 0)
			{
				impar = matriz[linha][coluna];
			}
				}
			}
		
		for (linha = 0; linha < DIM; linha ++ )
			{	cout <<"  \n";
				for (coluna = 0; coluna < DIM; coluna ++)
				{
				cout << matriz [linha][coluna];
				}
			}
		cout << "\n soma de todos elementos: " << soma;
		cout << "\n media de numeros: " << media;
		cout << "soma dos pares: " << par;
		cout << "soma dos impares: " << impar;
}
