#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    char *phrase;
    phrase = (char*) malloc (1000*sizeof(char)); // 1000 pq é 50 palvras com 20 caracteres
    char depois_espaco[50];
    int j; //guardar posição do vetor anterior
    int diff = 0;
    while(1){
        fgets(phrase,1000,stdin);
        // printf("%s\n",phrase);
        j = 1;
        diff = 0;
        if(phrase[0] == '*'){
            break;
        }
        depois_espaco[0] = tolower(phrase[0]);
        int tam = strlen(phrase);
        for(int i =0;i<tam;i++){ // guardando primeira letra de cada palavra
            if(phrase[i] == ' '){
                depois_espaco[j] = tolower(phrase[i+1]);
                j++;
            }
        }
        depois_espaco[j] = '\0';
        tam = strlen(depois_espaco);
        for(int x=1;x<tam;x++){
            if(depois_espaco[x] != depois_espaco[0]){
                printf("N\n");
                diff=1;
                break;
            }
        }
        if (diff==0){
            printf("Y\n");
        }
    }
    free(phrase);
    return 0;
}