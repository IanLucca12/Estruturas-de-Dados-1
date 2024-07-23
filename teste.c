#include <stdio.h>
#include<math.h>


int main(void) {
  int idade ;
  idade=28;
  float altura;
  altura= 1.8;
  printf("sua idade é %d anos.\n\n",idade);
  printf("Sua altura é %.2f metros \n\n", altura);

/* operações com printf */
int numero;
  numero= 71;
  printf("O %d elevado ao quadrado resulta em %d\n\n",numero, numero*numero);

/* Mechendo com o scanf */
  int vida;
  float distancia;
  float verticalidade;

  printf("digite sua idade:\n\n");
  printf("digite sua distancia da sua casa:\n\n");
  printf("digite a verticalidade da sua casa:\n\n");

  scanf("%d %f %f",&vida, &distancia, &vertical);idade

  printf("Seu tempo de vida é: %d \n\n", 100-vida);
  printf("A relação da sua distancia errada do sol é: %.5f \n\n",distancia*verticalidade);

int a=40;
  if(a%2==0){
    printf("a é um número par\n\n");
    a= a+a+1;
    printf("%d \n",a);
  }

  return 0;
}
