/*
Read three integers and sort them in ascending order. 
After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.
*/
#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    int n1,n2,n3;
    int vetor[3];

    scanf("%d %d %d", &n1,&n2,&n3);
    vetor[0] = n1;
    vetor[1] = n2;
    vetor[2] = n3;

    // BubnleSort
    for(int i=0;i<3;i++){
        for(int j=1;j<3;j++){
            if (vetor[j] < vetor[j-1]){
                int aux = vetor[j-1];
                vetor[j-1] =  vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for (int i = 0 ;i<3;i++){
        printf("%d\n",vetor[i]);
    }
    printf("\n");

    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    return 0;
}