#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
    int n_cartas;
    

    cin >> n_cartas;
    while (n_cartas){
        vector<int> cartas;
        vector<int>::iterator it;
        vector<int> carta_disc;

        for(int i=1;i<= n_cartas;i++){
            cartas.push_back(i);
        }

        for(it = cartas.begin();it != cartas.end() && cartas.size() >=2;){
            carta_disc.push_back(*it);
            it = cartas.erase(it);
            cartas.push_back(*it);
            it = cartas.erase(it);
        } 

        cout << "Discarded cards: ";
        auto aux = it;

        for(it = carta_disc.begin();it != carta_disc.end();it++){
            if(it == carta_disc.begin()){
                cout << *it;
            } else{
                cout << ", "<< *it;
            }
        }

        cout << "\n";
        cout << "Remaining card: " << *aux <<"\n";
        cin >> n_cartas;
    }
    



    return 0;
}