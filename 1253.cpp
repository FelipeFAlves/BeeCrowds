#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
char diminui(char letra,int qtd){
    for(int i=0;i<qtd;i++){
        if(letra=='A'){
            letra = 'Z';
        } else {
            letra--;
        }
    }
    return letra;
}

int main(){
    int n;
    string codigo;
    int qtd;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> codigo;
        cin >> qtd;
        int j=0;
        while (codigo[j] != '\0'){
            codigo[j] = diminui(codigo[j],qtd);
            j++;
        }
        j=0;
        while (codigo[j] != '\0'){
            cout << codigo[j];
            j++;
        }
        cout << "\n";
        
    }


    return 0;
}