#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    int n,tam,qtd;
    int par = 0 ;
    while(1){
        qtd = 0;
        par = 0;
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        for(int i=0;i<n;i++){
            scanf("%d %d",&tam,&qtd);

            if(qtd % 2 == 0){
                par += qtd;
            }else{
                par += (qtd-1);
            }
        }
        if (n == 1){
            printf("%d\n",qtd/4);
        } else {
            printf("%d\n",par/4);
        }
    }
    return 0;
}