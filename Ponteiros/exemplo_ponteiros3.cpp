#include <iostream>

using namespace std;

int main(){
	
	int *p; //declaração ponteiro
	
	int vetor[10];//declaração vetor
	
	*(p++);//atribuido ao ponteiro p o endereço de memoria do PRIMEIRO elemento do vetor 
	
	cout <<"\n"<< p;
	
	*(p++);//atribuido ao ponteiro p o endereço de memoria do PRIMEIRO elemento do vetor 
	
	cout <<"\n"<< p;
	
	return 0;
	
}
