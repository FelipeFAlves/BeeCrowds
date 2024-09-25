#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    set<string> dicionario;
    set<string>::iterator it; 

    // char linha[201];
    char linha[1000*200];

    while(scanf("%s",linha) == 1){
        for (unsigned j =0;j<strlen(linha);j++){
            if(!isalpha(linha[j])){
                linha[j] = ' ';
            }
        }
        
        stringstream npalavra(linha);
        string palavras;

        while (npalavra >> palavras){
            for (unsigned j =0;j<palavras.size();j++){
                palavras[j] = tolower(palavras[j]);
            }
            dicionario.insert(palavras);
        }

    }

    for(it = dicionario.begin();it != dicionario.end();it++){
        cout<< *it << '\n';
    }

    return 0;
}