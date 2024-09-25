#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves
int main (){
    int n;
    char message[100]; //Guarda a msg
    char solucao[100]; // Guardar a charada
    scanf("%d",&n);
    getchar();

    for (int i=0;i<n;i++){
        int j =0,k=0;
        memset(message,0,sizeof(message));
        memset(solucao,0,sizeof(solucao));

        fgets(message,100,stdin);
        
        while (message[j] != '\0'){ // Enquanto a string n acabar
            if(message[0] != ' ' && j==0){ //Primeiro valor se n for vazio;
                solucao[k] = message[0];
                k++;
            }
            if(message[j] == ' ' && message[j+1] != ' ' && message[j+1] != '\n'){
                // printf("%c ",message[j+1]);
                solucao[k] = message[j+1];
                k++;
            }
            j++;
        }
        solucao[k] = '\0';
        printf("%s\n",solucao);
    }
    
    return 0;
}