#include <stdio.h>
int val(char c){
    switch(c){
        case 'I':return 1;case 'V':return 5;case 'X':return 10;
        case 'L':return 50;case 'C':return 100;case 'D':return 500;
        case 'M':return 1000;default:return 0;
    }
}
int main(){
    char r[100];int i,res=0;
    scanf("%s",r);
    for(i=0;r[i];i++){
        int s1=val(r[i]),s2=val(r[i+1]);
        res+=(s1>=s2)?s1:-s1;
    }
    printf("%d",res);
}
