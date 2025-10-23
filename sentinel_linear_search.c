#include <stdio.h>
int main(){
    int a[10],n,key,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&key);
    a[n]=key;
    for(i=0;;i++)if(a[i]==key)break;
    if(i==n)printf("Not found");
    else printf("Found at %d",i);
}
