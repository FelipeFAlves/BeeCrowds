#include <bits/stdc++.h>
// Felipe Ferreira Alves - 202102653
int main(){
    int time,speed;
    scanf("%d",&time);
    scanf("%d",&speed);
    int distance = time * speed;
    float liters = float(distance)/12;
    printf("%.3f\n", liters);

    return 0;
}