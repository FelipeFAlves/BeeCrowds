#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n,qtd,altura,contador; // Contador é quantos tiros levou
    int k;
    char jumps[50];
    vector<int>::iterator it;
    vector<int> alturas; // Guarda as alturas do tiro
    scanf("%d",&n);

    for(int i =0;i<n;i++){
        scanf("%d",&qtd);
        contador=0;
        k=0;
        alturas.clear();
        for(int j =0;j<qtd;j++){ // Guardas as alturas
            scanf("%d",&altura);
            alturas.push_back(altura); 
        }

        getchar();
        fgets(jumps,50,stdin); // Guarda a string

        for(it = alturas.begin();it != alturas.end();it++){
            if((*it > 2) && jumps[k] == 'J'){
                contador++;
            }
            else if( (*it <= 2) && jumps[k] =='S'){
                contador++;
            }
            k++; //Posição da string
        }
        printf("%d\n",contador);
    }

    return 0;
}