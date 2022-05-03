#include <iostream>

using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);

int main(){
	
	int res;
	
	res = soma2(14,6);
	
	cout << res;
	
	return 0;
}

void texto(){
	cout << "\n void texto";
}

void soma(int n1, int n2){
	cout << "soma dos valores: " << n1+n2 << "\n";
}

int soma2(int n1, int n2){
	return n1 + n2;
}
