#include <iostream>
using namespace std;

int main() {
    char letra;
    
    cout << "digite uma letra: ";
	cin >> letra; 
	
	if(letra == 'a' || letra == 'e' || letra == 'i' ||
        letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' ||
        letra == 'O' || letra == 'U'){
		cout << "essa letra e uma vogal";
	} else {
		cout << "essa letra e uma consoante";
	}

	return 0;
}
