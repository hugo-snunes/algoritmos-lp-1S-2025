#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(int argc, char* argv[]){

int x, y, z;    

if(argc < 3){
    printf("Informe 2 ou 3 argumentos inteiros");
    return 1;
}
if(argc != 3 && argc != 4){
x = atoi(argv[1]);
y = atoi(argv[2]);
    printf("%d", menor_2n(x, y));
}else{
x = atoi(argv[1]);
y = atoi(argv[2]);
z = atoi(argv[3]);           
    printf("%d", menor_3n(x, y, z));
}

    return 0;    
}