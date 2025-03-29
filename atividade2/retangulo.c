#include <stdio.h>
int main(int argc, char* argv[]){

printf("Area do retangulo\n");

int altura = 10;
int base = 10;

printf("\nDigite o valor do Altura:", altura);
scanf("%d", &altura);

printf("Digite o valor da Base:", base);
scanf("%d", &base);

printf("\nFormula: Area = Base * Altura\n");

int area = (altura*base);
printf("\nO valor da area do retangulo eh: %d", area);

return 0;

}