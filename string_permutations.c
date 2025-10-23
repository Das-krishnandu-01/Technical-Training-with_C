#include <stdio.h>
#include <string.h>
void perm(char *a,int l,int r){
    if(l==r)printf("%s\n",a);
    else{
        for(int i=l;i<=r;i++){
            char t=a[l];a[l]=a[i];a[i]=t;
            perm(a,l+1,r);
            t=a[l];a[l]=a[i];a[i]=t;
        }
    }
}
int main(){
    char s[10];
    scanf("%s",s);
    perm(s,0,strlen(s)-1);
}
