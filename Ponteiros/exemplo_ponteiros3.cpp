#include <iostream>

using namespace std;

int main(){
	
	int *p; //declara��o ponteiro
	
	int vetor[10];//declara��o vetor
	
	*(p++);//atribuido ao ponteiro p o endere�o de memoria do PRIMEIRO elemento do vetor 
	
	cout <<"\n"<< p;
	
	*(p++);//atribuido ao ponteiro p o endere�o de memoria do PRIMEIRO elemento do vetor 
	
	cout <<"\n"<< p;
	
	return 0;
	
}
