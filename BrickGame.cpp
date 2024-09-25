#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 202102653
int main(){
    int t,n;
    vector<int> vetor;

    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n); // Quantidade de integrantes
        vetor.clear();
        for (int j =0;j<n;j++){
            int num;
            scanf("%d",&num);
            vetor.push_back(num);
        }
        int cap = n/2; // Como o vetor vem ordenado, é só achar a metade dele
        printf("Case %d: %d\n",i+1,vetor[cap]);
    }

    return 0;
}