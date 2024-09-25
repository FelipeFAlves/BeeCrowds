#include <bits/stdc++.h>
using namespace std;
//Felipe Ferreira Alves - 2021020653
int main(){
    int derrotar;
    int qtd_runas;
    map <char,int> runas;
    map<char,int>::iterator it;

    scanf("%d %d",&qtd_runas,&derrotar);

    for (int i = 0; i < qtd_runas; i++){
        char letra;
        int amizade;
        scanf(" %c %d",&letra,&amizade);
        runas.insert(make_pair(letra,amizade));
    }

    int resultado = 0;
    scanf("%d",&qtd_runas);

    for(int j=0;j<qtd_runas;j++){
        char runa;
        scanf(" %c",&runa);
        it = runas.find(runa);
        resultado += it->second;
    }

    printf("%d\n",resultado);

    if(resultado>=derrotar){
        printf("You shall pass!\n");
    } else {
        printf("My precioooous\n");
    }
    


    return 0;
}