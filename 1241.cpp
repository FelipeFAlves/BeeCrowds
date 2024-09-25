#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n;
    scanf("%d",&n);
    getchar();

    for(int i=0;i<n;i++){
        char a[1005];
        char b[1005];

        int controle=0;
        scanf(" %s %s",a,b);
        // cin >> a >> b;
        char ultimo_a[sizeof(b)];

        if(strlen(b) > strlen(a)){
            cout << "nao encaixa" << "\n";
            continue;
        }

        int ultimo = strlen(a) - strlen(b);

        for(int j = ultimo;j<sizeof(a);j++){
            ultimo_a[controle] = a[j];
            controle++;
        }  

        ultimo_a[controle] = '\0';

        for(int k=0;k<strlen(ultimo_a);k++){
            if(ultimo_a[k] != b[k]){
                cout << "nao encaixa" << "\n";
                break;
            } else if( k==(strlen(ultimo_a)-1) && ultimo_a[k] == b[k]){
                cout << "encaixa" << "\n";
            }
        }    
         
    }

    return 0;
}