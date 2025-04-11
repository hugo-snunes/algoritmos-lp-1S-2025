#include <stdio.h>

int main(int argc, char* argv[]){

int alunos;
    
    printf("CONTROLADOR DE NOTAS\n");

    printf("Há quantos alunos na turma?");
    scanf("%d", &alunos);
 
    printf("Há %d alunos", &alunos);

float notas[alunos]; 
 
for(int i = 0; i < alunos; i++){
    printf("\nDigite a nota do aluno %d: ", i);
    scanf("%f", &notas[i]);
}

for(int i = 0; i < alunos; i++){
    printf("\nNota do aluno %d: %.2f", i, notas[i]);
}
   


return 0;
}