#include <stdio.h>
#include <stdlib.h>

void fRecalculaMedia(char nome[], float np1, float np2, float listas){
   float media;
   if (np1<np2){
       printf("Informe novamente a nota da p1: ");
       scanf("%f", &np1);            
     }
   else{
       printf("Informe novamente a nota da p1: ");
       scanf("%f", &np2);            
        
     }  
  media = np1 * 0.4 + np2 * 0.4 + listas;
  if (media >=6){
          printf("Aluno %s", nome);
          printf(" aprovado com sub e media %.2f", media);       
        }
  else{
          printf("Aluno %s", nome);
          printf(" reprovado com sub e media %.2f", media);       
       
     }
  }


void fCalcula(char nome[], float np1, float np2, float listas){
     float media;
     media = np1 * 0.4 + np2 * 0.4 + listas;
     if (media >= 6){
             printf("O aluno %s", nome);
             printf(" foi aprovado direto com media %.2f", media);     
            }
      else{
         fRecalculaMedia(nome, np1, np2, listas);
       } 
                 
  }

void fInsere(){
  float np1, np2, listas;
  char nome[50];
  printf("Informe o nome do aluno: ");
  scanf("%s", nome);
  printf("Informe a nota da p1 ");
  scanf("%f", &np1);       
  printf("Informe a nota da p2 ");
  scanf("%f", &np2);       
  printf("Informe a pontuacao das listas ");
  scanf("%f", &listas);       
  fCalcula(nome, np1, np2, listas); 
}

int main()
{
  fInsere();  
  system("pause");
  return 0;
}



