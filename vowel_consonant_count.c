#include <stdio.h>
#include <ctype.h>
int main(){
    char s[100];
    int v=0,c=0,i;
    gets(s);
    for(i=0;s[i];i++){
        char ch=tolower(s[i]);
        if(isalpha(ch)) (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')?v++:c++;
    }
    printf("Vowels=%d Consonants=%d",v,c);
}
