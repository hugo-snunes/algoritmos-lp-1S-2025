#include <stdio.h>

int main(int argc, char* argv[]){
    float altura = 1.67;
    float peso = 58.72;
    printf("CALCULADORA IMC\n");
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
     scanf("%f", &peso);
    printf("A altura eh %.2f\n", altura);
    printf("O peso eh %.2f\n", peso); 

    float IMC = peso/(altura*altura);
    printf("Seu IMC eh: %.2f", IMC);
    
    return 0;
}