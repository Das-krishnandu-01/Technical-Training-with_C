#include <stdio.h>
int x=10;
void show(){extern int x;printf("%d",x);}
int main(){show();}
