#include <stdio.h>

int main(int argc, char* argv[]){
    float altura, peso;

    printf("CALCULADORA IMC\n");
    printf("\nDigite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
     scanf("%f", &peso);
   
    printf("\nIMC = %.2f / (%.2f)^2\n", altura, peso);

    float IMC = peso/(altura*altura);
    printf("Seu IMC eh: %.2f", IMC);
    
    return 0;
}