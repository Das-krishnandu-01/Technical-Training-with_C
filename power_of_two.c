#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n && !(n&(n-1))) printf("Power of two");
    else printf("Not power of two");
}
