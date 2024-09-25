#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n;
    string palavra;

    set<string> lista;
    set<string>::iterator it;

    scanf("%d",&n); // Qnts x o loop roda
    getchar();
    
    for(int i=0;i<n;i++){
        lista.clear();
        string linha;
        //lê a linha
        getline(cin, linha);
        stringstream palavras(linha);

        while (palavras >> palavra) { // Guarda ordenado se sem repetições 
            lista.insert(palavra);
        }

        // auto replicatas = unique(lista.begin(),lista.end());
        // lista.resize(distance(lista.begin(),replicatas));
        // unsigned int controle =0;
        for(it=lista.begin();it != lista.end();it++){ // Print
            if(it == lista.begin()){
                cout << *it;
            } else {
                cout << " " << *it;
            }
            // cout << *it << " ";
        }
        printf("\n");
    }

    return 0;
}