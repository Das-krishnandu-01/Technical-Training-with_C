#include <stdio.h>
#include <ctype.h>
int main(){
    char s[200];
    int a[26]={0},i,flag=1;
    gets(s);
    for(i=0;s[i];i++) if(isalpha(s[i])) a[tolower(s[i])-'a']=1;
    for(i=0;i<26;i++) if(!a[i]) flag=0;
    printf(flag?"Pangram":"Not Pangram");
}
