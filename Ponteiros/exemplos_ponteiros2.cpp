#include <iostream>

using namespace std;

int main(){
	
	int *p; //declaração ponteiro
	
	int vetor[10];//declaração vetor
	
	p=&vetor[0];//atribuido ao ponteiro p o endereço de memoria do PRIMEIRO elemento do vetor 
	
	cout <<"\n"<< p;
	
	p=&vetor[1];//atribuido ao ponteiro p o endereço de memoria do PRIMEIRO elemento do vetor 
	
	cout <<"\n"<< p;
	
	return 0;
	
}
