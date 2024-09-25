#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    int led = 0,n,k=0;
    char num[10^100];
    int n_qtd[10][2] = {{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6},{0,6}};
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        fgets(num,10^100,stdin);
        led =0;
        k = 0; 
        while (num[k] != '\0'){
            int numero = num[k] - '0'; // Transformando Char para int
            for(int j=0;j<10;j++){
                if(numero == n_qtd[j][0]){
                    led += n_qtd[j][1];
                    break;
                }
            }
            k++;
        }
        
        // scanf("%d",&num);
        // led = 0;
        // while (num != 0){
        //     // int resto = num%10;
        //     for(int j=0;j<10;j++){
        //         if(resto == n_qtd[j][0]){
        //             led += n_qtd[j][1];
        //             break;
        //         }
        //     }
        //     // num = num/10;
        // }
        printf("%d leds\n",led);
    }

    return 0;
}