#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    char cpf[14];
    int multi = 1,b1=0,b2=0;
    while(scanf("%s",cpf) == 1){
        b1=0;
        b2=0;
        multi = 1;

        for(int i =0;i<11;i++){ // Produzindo b1
            if(isdigit(cpf[i])){
                int num = cpf[i] - '0';
                b1 += multi*num;
                multi++;
            }
        }

        int sobra = b1%11;
        if (sobra >= 10){
            b1 = 0;
        } else {
           b1 = sobra; 
        }

        multi = 9;
        for(int i =0;i<11;i++){ // Produzindo B2
            if(isdigit(cpf[i])){
                int num = cpf[i] - '0';
                b2 += multi*num;
                multi--;
            }
        }

        sobra = b2%11;
        if (sobra >= 10){
            b2 = 0;
        } else {
           b2 = sobra; 
        }

        int confB1= cpf[12] - '0';
        int confB2 = cpf[13] - '0';

        if(b1 == confB1 && b2 == confB2){ // Verificando se é válido
            printf("CPF valido\n");
        } else{
            printf("CPF invalido\n");
        }
    }


    return 0;
}