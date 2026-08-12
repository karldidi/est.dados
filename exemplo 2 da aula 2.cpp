#include <iostream>
using namespace std;

int main(){

	int numero;
	cout << "digite um numero: ";
	cin >> numero;
	
	if(numero >= 10 && numero <= 20){
		cout << "o numero esta no intervalo de 10 e 20." << endl;
	} else {
		cout << " o numero esta fora do intervalo de 10 e 20." << endl;
	}
	
	return 0;
}
