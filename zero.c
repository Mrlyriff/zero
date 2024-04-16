#include <stdio.h
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
    int numero;

printf("Digite o número inteiro: ");
scanf("%i", &numero);

 if(numero == 0){
 printf("O número é zero.");
} 
  else{
  printf("O número não é zero");
 }
}
