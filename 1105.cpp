#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int b,n;
    
    while(scanf("%d %d",&b,&n)){
        vector<int> reserva;
        vector<int>::iterator it;
        
        if((b == 0) && (n == 0)){
            break;
        }

        for (int i=0;i<b;i++){
            int num;
            cin >> num;
            reserva.push_back(num);
        }

        for (int i=0;i<n;i++){
            int d; // devedor
            int c; // credor
            int v;// valor debênture
            cin >> d >> c >> v;

            reserva[c-1] = reserva[c-1]+v;
            reserva[d-1] = reserva[d-1] -v;
        }
        int semNegativo = 1;
        for(it = reserva.begin(); it != reserva.end();it++){
            if (*it < 0){
                semNegativo = 0;
                break;
            }
        }
        if (semNegativo == 1){
            cout << "S" << "\n";
        } else {
            cout << "N" << "\n";
        }
    }
    return 0;
}