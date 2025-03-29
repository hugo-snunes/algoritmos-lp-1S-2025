#include <stdio.h>
int main(int argc, char* argv[]){

printf("Area do triangulo\n");

float altura = 10;
float base = 10;

printf("\nDigite o valor do Altura:", altura);
scanf("%f", &altura);

printf("Digite o valor da Base:", base);
scanf("%f", &base);

printf("\nFormula: Area = Base * Altura / 2\n");

float area = (altura*base)/2;
printf("\nO valor da area do triangulo eh: %.1f", area);

return 0;
}