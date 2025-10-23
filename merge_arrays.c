#include <stdio.h>
int main(){
    int a[10],b[10],c[20],n1,n2,i,j=0;
    scanf("%d%d",&n1,&n2);
    for(i=0;i<n1;i++)scanf("%d",&a[i]);
    for(i=0;i<n2;i++)scanf("%d",&b[i]);
    for(i=0;i<n1;i++)c[j++]=a[i];
    for(i=0;i<n2;i++)c[j++]=b[i];
    for(i=0;i<j;i++)printf("%d ",c[i]);
}
