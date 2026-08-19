#include <iostream>
using namespace std;

int main(){
	int diasemana;
	
	// leitura do dia da semana (1-7)
	cout << "digite o numero do dia da semana ( 1 a 7): ";
	cin >> diasemana;
	
	switch (diasemana) {
		case 1:
			cout << "domingo" << endl;
			break;
		case 2:
			cout << "segunda-feira" << endl;
			break;
		case 3:
			cout << "terça-feira" << endl;
			break;
		case 4:
			cout << "quarta-feira" << endl;
			break;
		case 5:
			cout << "quinta-feira" << endl;
			break;
		case 6:
			cout << "sexta-feira" << endl;
			break;
		case 7:
			cout << "sabado" << endl;
			break;
		default :
			cout << "dia invalido!" << endl;
	}
	
	return 0;
}
 
