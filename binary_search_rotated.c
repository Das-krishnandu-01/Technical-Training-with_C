#include <stdio.h>
int search(int a[],int n,int k){
    int l=0,h=n-1;
    while(l<=h){
        int m=(l+h)/2;
        if(a[m]==k)return m;
        if(a[l]<=a[m]){
            if(k>=a[l]&&k<a[m])h=m-1;else l=m+1;
        }else{
            if(k>a[m]&&k<=a[h])l=m+1;else h=m-1;
        }
    }
    return -1;
}
int main(){
    int n,a[20],k,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    int p=search(a,n,k);
    if(p==-1)printf("Not found");else printf("Found at %d",p);
}
