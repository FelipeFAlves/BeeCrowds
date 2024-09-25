#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    vector<int> par;
    vector<int> impar;
    vector<int>::iterator it;
    int n;
    cin >>n;
    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        if(num%2==0){
            par.push_back(num);
        } else {
            impar.push_back(num);
        }
    }
    sort(impar.rbegin(),impar.rend());
    sort(par.begin(),par.end());

    for(it = par.begin();it!=par.end();it++){
        cout << *it << "\n";
    }
    for(it = impar.begin();it!=impar.end();it++){
        cout << *it << "\n";
    }
    return 0;
}