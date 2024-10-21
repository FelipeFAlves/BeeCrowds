#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int X,Y;
    int num;
    while(cin >> N){
        multiset<int> valores;
        for(int i=0;i<N;i++){
            cin >> X >> Y;
            for(int j=min(X,Y);j<=max(X,Y);j++){
                valores.insert(j);
            }
        }
        cin >> num;
        auto pos = valores.find(num);
        if( pos != valores.end()){
            auto range = valores.equal_range(num);
            auto ultima_pos = prev(range.second); // .first é o primeiro elemento
            //.second é após o ultimo elemento
            cout << num << " found from " << distance(valores.begin(), pos) << " to " << distance(valores.begin(), ultima_pos) << "\n";
        } else cout << num << " not found" << "\n";

    }
}