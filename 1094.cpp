#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n;
    int qtd,total=0;
    char animal;

    scanf("%d",&n);
    multimap<char,int> animais;
    multimap<char,int>::iterator it;

    for (int i =0;i<n;i++){
        scanf("%d %c",&qtd,&animal);
        total +=qtd;
        animais.insert(make_pair(animal,qtd));
    }
    float coelho =0,rato=0,sapo=0; 

    for(it=animais.begin();it != animais.end();it++){
        if(it->first=='C'){
            coelho += it->second;
        } else if (it->first=='R'){
            rato += it->second;
        } else {
            sapo += it->second;
        }
    }
    float p_coelho = (coelho * 100)/total;
    float p_rato = (rato * 100)/total;
    float p_sapo = (sapo * 100)/total;
    // printf("%f\n",p_coelho);
    // printf("%f\n",p_rato);
    // printf("%f\n",p_sapo);
    cout << "Total: " << total <<" cobaias" <<"\n";
    cout << "Total de coelhos: " <<coelho <<"\n";
    cout << "Total de ratos: " <<rato << "\n";
    cout << "Total de sapos: " << sapo << "\n";
    printf("Percentual de coelhos: %.2f %%\n",p_coelho);
    printf("Percentual de ratos: %.2f %%\n",p_rato);
    printf("Percentual de sapos: %.2f %%\n",p_sapo);
    // cout << "Percentual de coelhos: " << setprecision(3) << p_coelho << " %" << "\n";
    // cout << "Percentual de ratos: " << setprecision(3) << p_rato<<" %" << "\n";
    // cout << "Percentual de sapos: " << setprecision(3)<< p_sapo << " %" << "\n";


    return 0;
}