#include <iostream>
using namespace std;

int main() {
    double salario, imposto;

    cout << "Digite o salario anual: R$ ";
    cin >> salario;

    if (salario <= 20000) {
        imposto = 0;
    } 
    else if (salario <= 50000) {
        imposto = salario * 0.10;
    } 
    else {
        imposto = salario * 0.20;
    }

    cout << "Imposto de renda: R$ " << imposto << endl;

    return 0;
}

