#include<stdio.h>
#include<stdlib.h>

struct node{
    int i;
    struct node *link;
};

struct node* f(struct node *head){
    struct node *pre=NULL,*cur,*next=NULL;
    cur=head;

        while(cur){
            next=cur->link;
            cur->link=pre;
            pre=cur;
            cur=next;
        }
        return pre;
    
    
    
}

int main(){
    //create nodes
    struct node *head,*first,*second,*third,*foruth,*t,*x; 
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    foruth=(struct node*)malloc(sizeof(struct node));
    
    //put data in nodes and link all nodes
    head->i=1;
    head->link=first;
    
    first->i=2;
    first->link=second;
    
    second->i=3;
    second->link=third;
    
    third->i=4;
    third->link=foruth;
    
    foruth->i=5;
    foruth->link=NULL;
    
    t=f(head);
    while(t){
        printf("%d ",t->i);
        t=t->link;
    }
    return 0;
    
}
