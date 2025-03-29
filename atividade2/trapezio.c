#include <stdio.h>
int main(int argc, char* argv[]){

printf("Area do trapezio\n");

float altura = 10;
float base_maior = 10;
float base_menor = 10;

printf("\nDigite o valor do Altura:", altura);
scanf("%f", &altura);


printf("\nFormula: Area = (Base maior + Base menor) * Altura / 2\n");
printf("\n A = (%.1f + %.1f) * %.1f / 2\n", base_maior, base_menor, altura);

float area = (base_maior-base_menor)*altura/2;
printf("\nO valor da area eh: %.1f", area);

return 0;
}