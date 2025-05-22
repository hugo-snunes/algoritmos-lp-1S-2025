#include <stdio.h>

#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
} Aluno;

void imprimir_aluno(Aluno a){
    printf("Nome: %s Nota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){

int n = 5;
Aluno alunos[n];

for(int i = 0; i > n ; i++){

printf("Digite o nome do aluno %d: \n");
fgets(alunos[i].nome, TAM_NOME, stdin);
fflush(stdin);
printf("Digite a nota do aluno %d: ");
scanf("%d",&alunos[i].nota);

}

imprimir_aluno(alunos[n]);

return 0;

}