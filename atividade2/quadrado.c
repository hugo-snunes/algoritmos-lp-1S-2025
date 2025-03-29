#include <stdio.h>
int main(int argc, char* argv[]){

printf("Area do quadrado\n");
int lado = 10;
printf("\nDigite o valor do Lado:\n", lado);
scanf("%d", &lado);

printf("Formula: Area = Lado^2\n");

int area = (lado*lado);
printf("\nO valor da area do quadrado eh: %d", area);

return 0;

}