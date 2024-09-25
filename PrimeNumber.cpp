#include <bits/stdc++.h>
// Felipe Ferreira Alves - 202102653
int main(){
    int n,num,controle=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        controle =0;
        for(int j=1;j<=num;j++){
            if(num%j==0){
                controle++;
            }
        }
        if (controle == 2){
            printf("%d eh primo\n",num);
        } else {
            printf("%d nao eh primo\n",num);
        }
        
    }


    return 0;
}

