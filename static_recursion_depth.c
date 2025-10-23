#include <stdio.h>
void rec(int n){
    static int d=0;d++;printf("Depth %d\n",d);
    if(n>1)rec(n-1);
    d--;
}
int main(){
    int n;
    scanf("%d",&n);
    rec(n);
}
