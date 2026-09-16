#include <stdio.h>
#include <stdlib.h>






int fsoma(int n2){
	return n2 + 50;
}


int fcalc(int num){
	int total = num + 20;
	return total;
}


int fmultiplica(int p1, int p2, int p3){
	return (p1 * p2) * p3;
}


int main(){
int num =30;
int resultadofuncao;
resultadofuncao = fcalc(num);
printf("%i", resultadofuncao);
//resultadofuncao = fsoma(resultadofuncao + 30);
//printf("%i",resultadofuncao);
printf("%i", fmultiplica(resultadofuncao, 2, 2));

system("pause");
return 0;
}
