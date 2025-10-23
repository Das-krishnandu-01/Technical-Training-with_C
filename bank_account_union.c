#include <stdio.h>
union bank{int acc;float bal;};
int main(){
    union bank b;int ch;
    scanf("%d",&ch);
    if(ch==1){scanf("%d",&b.acc);printf("Account:%d",b.acc);}
    else{scanf("%f",&b.bal);printf("Balance:%.2f",b.bal);}
}
