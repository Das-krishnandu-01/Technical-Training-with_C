#include <stdio.h>
void h(int n,char A,char B,char C){
    if(n==1){printf("%c->%c\n",A,C);return;}
    h(n-1,A,C,B);printf("%c->%c\n",A,C);h(n-1,B,A,C);
}
int main(){
    int n;
    scanf("%d",&n);
    h(n,'A','B','C');
}
