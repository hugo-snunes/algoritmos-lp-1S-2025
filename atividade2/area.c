#include <stdio.h>

int main(int argc, char* argv[]){

char opcao;
float pi = 3.14;
float raio;
float area_circulo = pi*(raio*raio);

float diagonal_maior;
float diagonal_menor;
float area_losango = (diagonal_maior*diagonal_menor)/2;

float lado, area_quadrado;
area_quadrado = lado*lado;



printf("CALCULADORAS DE AREAS\n");

printf("\nEscolha uma opcao: \n");
printf("c - Circulo\n");
printf("l - Losango\n");
printf("q - Quadrado\n");
printf("r - retangulo\n");
printf("t - triangulo\n");
printf("z- Trapezio\n");

scanf("\n%c", &opcao);

switch(opcao){

case 'c':
    printf("Circulo\n");
    printf("\nDigite o valor do Raio:", raio);
scanf("%f", &raio);

    printf("\nFormula: Area = pi (3.14) * raio^2\n");
    printf("\nA = %.2f * %.0f ^2\n", pi, raio);
printf("A = %.2f", area_circulo);
    break;

case 'l':
    printf("Losango\n");
    printf("\nDigite o valor da Diagonal maior:", diagonal_maior);
scanf("%f", &diagonal_maior);

printf("Digite o valor da Diagonal menor:", diagonal_menor);
scanf("%f", &diagonal_menor);

printf("\nFormula: Area = (Diagonal maior * Diagonal menor)/ 2\n");
printf("\nA = (%.0f * %.0f) / 2\n", diagonal_maior, diagonal_menor);
printf("A = %.1f", area_losango);
    break;

case 'q':
    printf("Quadrado\n");
    printf("\nDigite o valor do Lado:", lado);
scanf("%f", &lado);

printf("Formula: Area = Lado^2\n");
printf("\nA = %.1f ^2\n", lado);

printf("A = %.2f", area_quadrado);
    break;

case 'r':
    printf("Retangulo\n");
    
    break;
case 't':
    printf("Triangulo\n");
    break;
case 'z':
    printf("Trapezio\n");
    break;
default:
    printf("Opcao invalida");






}

return 0;

}