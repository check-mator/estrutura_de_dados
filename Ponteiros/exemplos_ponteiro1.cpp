#include <iostream>

using namespace std;

// um ponteiro ir� APONTAR o ENDERE�O de uma variavel
//OBS: o tipo da variavel do ponteiro(ex: int) deve ser IGUAL ao tipo da variavel que ele esta apontoando

int main(){
	int n1 = 4; //declara��o de uma variavel comum
	
	int *ponteiro; //declara��o de um ponteiro
	
	ponteiro = &n1; //atribuimos ao ponteiro do endere�o da variavel n1 esta armazenada
	
	cout << ponteiro; //ir� imprimir o endere�o da variavel n1 (valor hexadecimal)
	
	cout << *ponteiro; //ir� imprimir o valor da varivale n1 (valor de n1 = 4)
}
