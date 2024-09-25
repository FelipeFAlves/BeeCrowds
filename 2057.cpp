#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int hora,tempo,time_zone;
    scanf("%d %d %d",&hora,&tempo,&time_zone);
    int total = hora+tempo+time_zone;
    
    if (total >= 24){
        total = total - 24;
    } else if (total < hora){
        total = 24 + total;
    }
    printf("%d\n",total);

    return 0;
}