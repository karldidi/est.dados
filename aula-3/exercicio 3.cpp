#include <iostream>
using namespace std;

int main(){
	float numeroA,numeroB,numeroC;
	
	cout << "digite os tres lados: ";
	cin >> numeroA >>  numeroB >> numeroC;
	
	if(numeroA == numeroB && numeroA == numeroC){
		cout << "equilatero";
	} else if (numeroA == numeroB || numeroA == numeroC || numeroB == numeroC){
		cout << "isosceles";
	} else {
		cout << "escaleno";
	}
	
	return 0;
}
