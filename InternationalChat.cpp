/*
Rafael recently won a scholarship and is studying outside of Brazil, 
where he met several people from several different nationalities. 
The native language of this country is English, and all the people that
Rafael met speak English as either first or second language.
As learning a second language is a hard and tiring task, some people 
prefer to talk in their own native language whenever possible. One exception 
to this rule is when there are two people in the group that doesn't have
the same native language. In this kind of situation, the language they speak is English.
For example, if there is a group with only brazilians, the spoken language will be Portuguese
, but if there is a spanish person between them, the spoken language will be English.
Rafael sometimes get confused about which language should be spoken in each group of 
people, and then he asked your help.*/
#include <bits/stdc++.h>
// Felipe Ferreira Alves - 2021020653
int main(){
    int n,k;
    int diff; // verificar se existe nome diferente
    scanf("%d",&n);

    for(int i =0;i<n;i++){
        diff = 0;
        scanf("%d",&k);
        char s[k][20];
        for(int i=0;i<k;i++){
            scanf("%s",s[i]);
        }
        // strcmp(s[i],s[i+1])
        for(int j=1;j<k;j++){
            if(strcmp(s[j],s[j-1])!=0){
                diff = 1;
                break;
            }
        }
        if (diff ==0){
            printf("%s\n",s[0]);
        }else{
            printf("ingles\n");
        }
    }

    return 0;
}