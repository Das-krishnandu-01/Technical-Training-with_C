#include <stdio.h>
int main(){
    char op;
    float a,b;
    scanf(" %c%f%f",&op,&a,&b);
    switch(op){
        case '+':printf("%.2f",a+b);break;
        case '-':printf("%.2f",a-b);break;
        case '*':printf("%.2f",a*b);break;
        case '/':printf("%.2f",b?a/b:0);break;
        default:printf("Invalid");
    }
}
