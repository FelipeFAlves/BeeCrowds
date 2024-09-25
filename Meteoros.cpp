#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    int x1,x2,y1,y2;
    int xm,ym;
    int qtdM;
    int dentro = 0;
    int nTeste = 1;

    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    while (1){
        if (x1 == 0 && x2==0 && y1==0 && y2==0){
            break;
        }
        dentro = 0;
        scanf("%d",&qtdM);

        for(int i=0;i<qtdM;i++){
            scanf("%d %d",&xm, &ym);
            //Inferior esquerdo = x1+y2 Superior direito = x2+y1
            if (xm >= x1 && xm <= x2 && ym <=y1 && ym >= y2){
                // printf("x1 %d x2 %d xm %d y1 %d y2 %d ym %d\n",x1,x2,xm,y1,y2,ym);
                dentro++;
            }
        }
        printf("Teste %d\n",nTeste);
        nTeste++;
        printf("%d\n",dentro);
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    }
    

    return 0;
}