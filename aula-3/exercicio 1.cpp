#include <iostream>
using namespace std;

int main(){
	int tema;
	
	cout << "digite o numero do tema ( 1 a 9): ";
	cin >> tema;
	
	switch (tema) {
		case 1:
			cout << "visao compuitacional" << endl;
			break;
		case 2:
			cout << "redes neurais" << endl;
			break;
		case 3:
			cout << "eng. software" << endl;
			break;
		case 4:
			cout << "front-end" << endl;
			break;
		case 5:
			cout << "back-end" << endl;
			break;
		case 6:
			cout << "qualidade de software" << endl;
			break;
		case 7:
			cout << "banco de dados" << endl;
			break;
		case 8:
			cout << "I.Artificial" << endl;
			break;
		case 9:
			cout << "realidade aumentada" << endl;
			break;
		default :
			cout << "nao tem esse tema" << endl;
	}
	
	return 0;
}
 
