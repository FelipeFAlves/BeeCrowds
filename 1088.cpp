#include <bits/stdc++.h>
using namespace std;

pair<vector<int>, int> MergeCountSplit(vector<int>& B, vector<int>& C) {
    int i = 0, j = 0, t = 0;
    int m = B.size() + C.size();
    vector<int> D;

    // Realiza a mesclagem dos vetores B e C
    while (i < B.size() && j < C.size()) {
        if (B[i] <= C[j]) {
            D.push_back(B[i]);
            i++;
        } else {
            D.push_back(C[j]);
            j++;
            t += B.size() - i;  // Conta o número de inversões
        }
    }

    // Adiciona os elementos restantes de B ou C
    while (i < B.size()) {
        D.push_back(B[i]);
        i++;
    }
    while (j < C.size()) {
        D.push_back(C[j]);
        j++;
    }

    return {D, t};
}

pair<vector<int>,int> SortCount(vector<int> &numeros){
    if(numeros.size() <= 1) return make_pair(numeros,0);
    vector<int> pMetade(numeros.begin(), numeros.begin() + numeros.size() / 2);
    vector<int> sMetade(numeros.begin() + numeros.size() / 2, numeros.end());
    
    auto Bx = SortCount(pMetade);
    auto Cy = SortCount(sMetade);
    auto Dz = MergeCountSplit(Bx.first,Cy.first);
    int soma = Bx.second + Cy.second + Dz.second;
    return {Dz.first, soma};
}

int main(){
    int N;
    while(1){
        vector<int> numeros;
        cin >> N;
        if(N == 0) break;
        for(int i=0;i<N;i++){
            int num;
            cin >> num;
            numeros.push_back(num);
        }
        auto resp = SortCount(numeros);

        if(resp.second % 2 == 0) cout << "Carlos" << "\n";
        else cout << "Marcelo" << "\n";
    }
    return 0;
}