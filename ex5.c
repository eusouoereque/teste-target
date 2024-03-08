#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    char string[101], copia[101];
    int i=0, tamanho, j;

    gets(string);
    tamanho = strlen(string);
    j=tamanho-1;

    for (i = 0; i < tamanho; i++){
        copia[i] = string[j];
        j--;
    }

    copia[tamanho] = '\0';

    printf("Texto normal: %s\n", string);
    printf("Texto reverso: %s\n", copia);


    return 0;
}