#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n;
    vector<int> alunos;
    vector<int> ordenado;
    vector<int>::iterator it;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        alunos.clear();
        ordenado.clear();
        int m,k=0;
        int aluno,diff=0;

        scanf("%d",&m);

        for(int j =0;j<m;j++){ // Populando o vetor
            scanf("%d",&aluno);
            alunos.push_back(aluno);
        }
        for (it = alunos.begin(); it != alunos.end(); it++){ //COpiando para o vetor que vou ordenar
            ordenado.push_back(*it);
        }

        sort(ordenado.rbegin(),ordenado.rend());

        // for (it = alunos.begin(); it != alunos.end(); it++){
        //     printf("%d ",*it);
        // }

        for (it = alunos.begin(); it != alunos.end(); it++){ // Comparando quem nao trcou posicao
            if(alunos[k] == ordenado[k]){
                diff++;
            }
            k++;
        }

        printf("%d\n",diff);
        

    }
    


    return 0;
}