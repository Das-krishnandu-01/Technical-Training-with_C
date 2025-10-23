#include <stdio.h>
int main(){
    int a[10],n,i,s=0,*p;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(p=a;p<a+n;p++)s+=*p;
    printf("%d",s);
}
