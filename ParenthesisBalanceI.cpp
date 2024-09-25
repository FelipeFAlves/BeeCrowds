#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    char expressao[1005];
    int abre =0;
    int fecha = 0;
    int controle =0;
    while(fgets(expressao,1005,stdin) != NULL){
        abre =0;
        fecha =0;
        controle =0;
        int i=0;
        while (expressao[i] != '\0'){
            if(expressao[i] == '('){
                abre++;
            } else if(expressao[i] == ')'){
                fecha++;
            }
            if(fecha > abre){
                cout << "incorrect" << '\n';
                controle++;
                break;
            }
            i++;
        }
        if((abre == fecha) && controle == 0){
            cout << "correct" << "\n";
        } else if (((fecha > abre) && controle == 0) || (abre > fecha)){
            cout << "incorrect" << "\n";
        }

    }

    return 0;
}