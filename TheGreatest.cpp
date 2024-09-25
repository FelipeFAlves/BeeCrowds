/*
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
MaiorAb = (a+b+abs(a-b))/2
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// FELIPE FERREIRA ALVES - 2021020653
int main (){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int maiorAB = (a+b+abs(a-b))/2;
    int maiorFinal = (maiorAB+c+abs(c-maiorAB))/2;
    printf("%d eh o maior",maiorFinal);
    return 0;
}