#include <stdio.h>
float avg(int a[],int n){int i,s=0;for(i=0;i<n;i++)s+=a[i];return(float)s/n;}
int main(){
    int n,a[20],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    printf("%.2f",avg(a,n));
}
