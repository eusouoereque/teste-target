#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num, i, n = 1, n1 = 1, n2 = 0, deu= 0;

    printf("Digite um numero:");
    scanf("%d", &num);

    if(num <= 3 && num > 0){
        printf("O numero pertence");
    }else{
        for(i = 2; i < 30; i++){
            n = n1+n2;
            if (n == num){
                deu++;
                printf("O numero pertence");
                
            }
            n2 = n1;
            n1 = n;
            
        }

        if (deu == 0){
            printf("O numero nao pertence");
        }
        
    }


    

    return 0;
}