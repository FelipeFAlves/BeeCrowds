#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    int qtd;
    int x,y;
    int borda_x,borda_y; //coordenadas da borda
    
    while (1){
        scanf("%d",&qtd);
        if(qtd == 0 ){
            break;
        }
        scanf("%d %d",&borda_x,&borda_y);
        for(int i =0;i<qtd;i++){
            scanf("%d %d",&x,&y);
            if(x == borda_x || y == borda_y){
                printf("divisa\n");
            } else if (x < borda_x && y > borda_y ){
                printf("NO\n");
            } else if (x > borda_x && y < borda_y){
                printf("SE\n");
            } else if(x < borda_x && y <borda_y){
                printf("SO\n");
            }else{
                printf("NE\n");
            }
        }
    }
    return 0;
}

