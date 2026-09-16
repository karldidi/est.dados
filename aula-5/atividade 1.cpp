#include <stdio.h>
#include <stdlib.h>



int fsoma(int p1, int p2){
	return p1 + p2 + 10;
}

int fmult(int resultadosoma, int p3){
	return (resultadosoma + p3) * 3;
}

int fcubo(int resultadomult){
	return resultadomult * resultadomult * resultadomult;
}

int main(){
	
int p1, p2, p3;
int resultadosoma, resultadomult, resultadocubo;
	
printf("Digite o primeiro numero: ");
scanf("%d", &p1);

printf("Digite o segundo numero: ");
scanf("%d", &p2);

printf("Digite o terceiro numero: ");
scanf("%d", &p3);
    
resultadosoma = fsoma(p1, p2);
    
resultadomult = fmult(resultadosoma, p3);

resultadocubo = fcubo(resultadomult);

printf("Resultado final do fcubo: %d\n", resultadocubo);
printf("Resultado final do fmult: %d\n", resultadomult);
printf("Resultado final do fsoma: %d\n", resultadosoma);
return 0;
}

