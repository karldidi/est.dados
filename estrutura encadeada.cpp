#include <iostream>
using namespace std;

int main(){
	int dia;
	cout << "digite o numero do dia da semana ( 1 a 7): ";
	cin >> dia;
	
	if(dia >= 1 && dia <= 7){
		if (dia == 1){
			cout << "domingo" << endl;
		} else if (dia == 2) {
			cout << "segunda-feira" << endl;
		} else if (dia == 3){
			cout << "terça-feira" << endl;
		} else if (dia == 4){
			cout << "quarta-feira" << endl;
		} else if (dia == 5){
			cout << "quinta-feira" << endl;
		} else if (dia == 6){
			cout << "sexta-feira" << endl;
		} else if (dia == 7){
			cout << "sabado" << endl;
		}

	} else {
		cout << "numero do dia invalido." << endl;
	}
	return 0;
}
