#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n,m,repetido=0;
    set<int> visto;
    set<int> conta;

    vector<int> ticket;
    vector<int>::iterator it;
    
    scanf("%d %d",&n,&m);
    while (n || m){
        visto.clear();
        ticket.clear();
        conta.clear();

        repetido = 0;
        int qtd =0;
        int qtdAntiga = 0;

        for(int i=0;i<m;i++){
            int num;
            scanf("%d",&num);
            ticket.push_back(num);
        }

        for(it = ticket.begin(); it != ticket.end();it++){
            visto.insert(*it);
            qtd = visto.size();

            if(qtd == qtdAntiga && (conta.find(*it) == conta.end())){
                repetido++;
                conta.insert(*it);
            } else {
                qtdAntiga = visto.size();
            }    
        }
            
        cout << repetido << "\n";
        scanf("%d %d",&n,&m);
    }
    


    return 0;
}