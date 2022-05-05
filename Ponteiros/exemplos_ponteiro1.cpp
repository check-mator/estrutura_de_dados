#include <iostream>

using namespace std;

// um ponteiro irá APONTAR o ENDEREÇO de uma variavel
//OBS: o tipo da variavel do ponteiro(ex: int) deve ser IGUAL ao tipo da variavel que ele esta apontoando

int main(){
	int n1 = 4; //declaração de uma variavel comum
	
	int *ponteiro; //declaração de um ponteiro
	
	ponteiro = &n1; //atribuimos ao ponteiro do endereço da variavel n1 esta armazenada
	
	cout << ponteiro; //irá imprimir o endereço da variavel n1 (valor hexadecimal)
	
	cout << *ponteiro; //irá imprimir o valor da varivale n1 (valor de n1 = 4)
}
