#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    vector<int> atacantes;
    vector<int> defensores;
    vector<int>::iterator it;
    // scanf ("%d %d",&a,&d);
    while(1){
        int a,d;
        scanf("%d %d",&a,&d); 
        if(a == 0 && d == 0){
            break;
        }
        atacantes.clear();
        defensores.clear();

        for(int i=0;i<a;i++){
            int jA; // Jogador ataque
            scanf("%d",&jA);
            // printf("%d\n",jA);
            atacantes.push_back(jA);
        }

        for(int j=0;j<d;j++){
            int jD; // Jogador defesa
            scanf("%d",&jD);
            // printf("%d\n",jD);
            defensores.push_back(jD);
        }

        sort(atacantes.begin(),atacantes.end());
        sort(defensores.begin(),defensores.end());
        

        if((atacantes[0] >= defensores[1]) || (atacantes[0] >= defensores[0] && atacantes[0] >= defensores[1])){
            printf("N\n");
        } else{
            printf("Y\n");
        }
        
    }


    return 0;
}