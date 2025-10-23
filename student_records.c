#include <stdio.h>
struct student{int id;char name[30];float marks;};
int main(){
    FILE *f=fopen("stud.dat","wb+");
    struct student s;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d%s%f",&s.id,s.name,&s.marks);fwrite(&s,sizeof(s),1,f);}
    rewind(f);
    while(fread(&s,sizeof(s),1,f)) printf("%d %s %.2f\n",s.id,s.name,s.marks);
    fclose(f);
}
