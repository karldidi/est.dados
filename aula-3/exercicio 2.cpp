#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout << "digite a nota do aluno: ";
	cin >> numero;
	
	string final = (numero >=6) ? "aprovado" : "reprovado";
	
	cout << " a nota " << numero << " e " << final << endl;
	
	return 0;
}
