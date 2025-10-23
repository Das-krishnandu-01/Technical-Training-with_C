#include <stdio.h>
struct emp{int id;char name[20];float sal;};
int main(){
    struct emp e[5];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d%s%f",&e[i].id,e[i].name,&e[i].sal);
    for(i=0;i<n;i++)printf("%d %s %.2f\n",e[i].id,e[i].name,e[i].sal);
}
