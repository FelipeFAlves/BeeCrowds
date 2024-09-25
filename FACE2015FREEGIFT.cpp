#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n,presente =0;
    vector<string> jogo;
    vector<string>::iterator it;
    string frase;

    scanf("%d",&n);
    getchar();
    
    frase = "F A C E";
    jogo.push_back(frase);

    for(int i=0;i<n;i++){
        getline(cin,frase);
        jogo.push_back(frase);
        it = jogo.end();
        it--;
        it--;
        string reverso = jogo[jogo.size()-1];
        reverse(reverso.begin(),reverso.end());
        if (reverso == *it){
            jogo.erase(it);
            jogo.erase(jogo.end()-1);
            presente++;
            if(jogo.size() == 0){
                frase = "F A C E";
                jogo.push_back(frase);
            }
        }
    }
    cout << presente << "\n";
    return 0;
}