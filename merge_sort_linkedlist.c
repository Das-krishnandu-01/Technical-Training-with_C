#include <stdio.h>
#include <stdlib.h>
struct node{int d;struct node*n;};
struct node*newNode(int x){struct node*t=malloc(sizeof(struct node));t->d=x;t->n=NULL;return t;}
void split(struct node*s,struct node**f,struct node**b){
    struct node*fast=s->n,*slow=s;
    while(fast){fast=fast->n;if(fast){slow=slow->n;fast=fast->n;}}
    *f=s;*b=slow->n;slow->n=NULL;
}
struct node*merge(struct node*a,struct node*b){
    if(!a)return b;if(!b)return a;
    struct node*r;
    if(a->d<=b->d){r=a;r->n=merge(a->n,b);}
    else{r=b;r->n=merge(a,b->n);}
    return r;
}
void mergesort(struct node**h){
    struct node*head=*h,*a,*b;
    if(!head||!head->n)return;
    split(head,&a,&b);
    mergesort(&a);mergesort(&b);
    *h=merge(a,b);
}
int main(){
    int n,x;
    scanf("%d",&n);
    struct node*h=NULL,*t=NULL;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        struct node*p=newNode(x);
        if(!h)h=t=p;else{t->n=p;t=p;}
    }
    mergesort(&h);
    for(struct node*p=h;p;p=p->n)printf("%d ",p->d);
}
