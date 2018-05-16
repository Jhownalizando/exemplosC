#include<iostream>
using namespace std;

float soma(float m, float n);
float divisao(float m, float n);
float multiplicacao(float m, float n);
float subtracao(float m, float n);

main(){
	int x,y,op,deseja_sair;
	deseja_sair = 1;

	 	while(deseja_sair) {
		
		cout << "Digite um numero: ";
		cin >> x;
		cout << "digite outro numero: ";
		cin >> y;
		cout << "Escolha uma operacao: \n 1-Soma \n 2-Subtracao \n 3-Divisao \n 4-Multiplicacao \n";
		cin >> op;
		if(op ==1){
			cout <<"\n A soma e: " << soma(x,y) << endl;
		}
		if(op ==2){
			cout <<"\n A subtracao e: " <<  subtracao(x,y) << endl;
		}
		if(op ==3){
			cout <<"\n A divisao e: " << divisao(x,y) << endl;
		}
		if(op ==4){
			cout <<"\n A multiplicacao e: " << multiplicacao(x,y) << endl;
		}
		if((op != 1 ) && (op!= 2) && (op!=3) && (op !=4)){
			cout << "\nA Opcao invalida." << endl;
		}
		cout <<"Deseja continuar? [1] para continuar ou [2] para sair. ";
		cin >> deseja_sair;
		if(deseja_sair != 1) {
			break;
		}
	}
}

float soma(float m, float n){
	return m + n;
}
float subtracao(float m, float n){
	return m - n;
}
float divisao(float m, float n){
	return m / n;
}
float multiplicacao(float m, float n){
	return m * n;
}
