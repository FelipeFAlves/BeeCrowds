#include <bits/stdc++.h>
using namespace std;
// Felipe Ferreira Alves - 2021020653
int main(){
        //Digitado/desejado
    map<char,char> convercao;
    map<char,char>::iterator it;
    convercao.insert(make_pair('1','`'));
    convercao.insert(make_pair('2','1'));
    convercao.insert(make_pair('3','2'));
    convercao.insert(make_pair('4','3'));
    convercao.insert(make_pair('5','4'));
    convercao.insert(make_pair('6','5'));
    convercao.insert(make_pair('7','6'));
    convercao.insert(make_pair('8','7'));
    convercao.insert(make_pair('9','8'));
    convercao.insert(make_pair('0','9'));
    convercao.insert(make_pair('-','0'));
    convercao.insert(make_pair('=','-'));

    convercao.insert(make_pair('W','Q'));
    convercao.insert(make_pair('E','W'));
    convercao.insert(make_pair('R','E'));
    convercao.insert(make_pair('T','R'));
    convercao.insert(make_pair('Y','T'));
    convercao.insert(make_pair('U','Y'));
    convercao.insert(make_pair('I','U'));
    convercao.insert(make_pair('O','I'));
    convercao.insert(make_pair('P','O'));
    convercao.insert(make_pair('[','P'));
    convercao.insert(make_pair(']','['));
    convercao.insert(make_pair('\\',']'));

    convercao.insert(make_pair('S','A'));
    convercao.insert(make_pair('D','S'));
    convercao.insert(make_pair('F','D'));
    convercao.insert(make_pair('G','F'));
    convercao.insert(make_pair('H','G'));
    convercao.insert(make_pair('J','H'));
    convercao.insert(make_pair('K','J'));
    convercao.insert(make_pair('L','K'));
    convercao.insert(make_pair(';','L'));
    convercao.insert(make_pair('\'',';'));

    convercao.insert(make_pair('X','Z'));
    convercao.insert(make_pair('C','X'));
    convercao.insert(make_pair('V','C'));
    convercao.insert(make_pair('B','V'));
    convercao.insert(make_pair('N','B'));
    convercao.insert(make_pair('M','N'));
    convercao.insert(make_pair(',','M'));
    convercao.insert(make_pair('.',','));
    convercao.insert(make_pair('/','.'));

    convercao.insert(make_pair(' ',' '));
    convercao.insert(make_pair('A','A'));
    convercao.insert(make_pair('Z','Z'));
    convercao.insert(make_pair('`','`'));

    string frase;
    while(getline(cin,frase)){
        int i=0;
        while (frase[i] != '\0'){
            it = convercao.find(frase[i]);
            cout << it->second;
            i++;
        }
        cout << "\n";
    }




    return 0;
}