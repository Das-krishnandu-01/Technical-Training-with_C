#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int*b){int t=*a;*a=*b;*b=t;}
int part(int a[],int l,int h){
    int piv=l+rand()%(h-l+1),p=a[piv];swap(&a[piv],&a[h]);
    int i=l-1;
    for(int j=l;j<h;j++) if(a[j]<p) swap(&a[++i],&a[j]);
    swap(&a[i+1],&a[h]);return i+1;
}
void quick(int a[],int l,int h){if(l<h){int pi=part(a,l,h);quick(a,l,pi-1);quick(a,pi+1,h);}}
int main(){
    int n,a[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    quick(a,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",a[i]);
}
