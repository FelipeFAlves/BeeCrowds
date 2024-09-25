#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main(){
    int n;
    int qtd=1;

    cin >> n;
    int numeros[n];
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        numeros[i] = num;
    }
    qsort(numeros,n,sizeof(int),compare);

    for(int i=0;i<n;i++){
        if(numeros[i] == numeros[i+1]){
            qtd++;
        } else {
            cout << numeros[i] << " aparece " << qtd << " vez(es)\n";
            qtd=1;
        }
    }
    

    return 0;
}