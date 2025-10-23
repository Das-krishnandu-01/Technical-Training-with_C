#include <stdio.h>
int main(){
    FILE *f1=fopen("file1.txt","r"),*f2=fopen("file2.txt","r"),*f3=fopen("merged.txt","w");
    char ch;
    while((ch=fgetc(f1))!=EOF) fputc(ch,f3);
    while((ch=fgetc(f2))!=EOF) fputc(ch,f3);
    fclose(f1);fclose(f2);fclose(f3);
}
