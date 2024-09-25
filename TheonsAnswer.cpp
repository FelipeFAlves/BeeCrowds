#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main (){
    int qtd,num,menor,pos,i=1;
    vector<int> vetor;
    vector<int>::iterator it;
    scanf("%d",&qtd);

    for(int i=0;i<qtd;i++){
        scanf("%d",&num);
        vetor.push_back(num);
    }
    menor = *vetor.begin();
    pos = i;
    for(it = vetor.begin();it!=vetor.end();it++){
        if(*it < menor){
            menor = *it;
            pos = i;
        }
        i++;
    }

    printf("%d\n",pos);

    return 0;
}