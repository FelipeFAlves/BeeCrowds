#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int a1,a2,a3;
    int prim=0,seg=0,terc=0;
    vector<int> menor;

    scanf("%d",&a1);
    scanf("%d",&a2);
    scanf("%d",&a3);
    
    // primeiro andar
    prim += a2*2;
    prim +=a3*4;
    menor.push_back(prim);
    //segundo andar
    seg += a1*2;
    seg += a3*2;
    menor.push_back(seg);
    //terceiro andar
    terc += a1*4;
    terc += a2*2;
    menor.push_back(terc);

    sort(menor.begin(),menor.end());

    printf("%d",menor[0]);

    return 0;
}