#include<stdio.h>
#include<stdlib.h>


//define prototype of structure 
struct node{
    int i;
    struct node *link;
};

//Push function
struct node* push(struct node *t,int item){
    
    t->i=item;
    t=t->link;
    return t;
}
 
int main(){
    struct node *head,*second,*third,*fourth,*fifth,*six,*seven;
    //create 7  nodes dynamically
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    six=(struct node*)malloc(sizeof(struct node));
    seven=(struct node*)malloc(sizeof(struct node));
    
    //link all the nodes
    head->link=second;
    second->link=third;
    third->link=fourth;
    fourth->link=fifth;
    fifth->link=six;
    six->link=seven;
    seven->link=NULL;
    
    struct node *t=head;
    
    head=push(head,10);
    head=push(head,20);
    head=push(head,30);
    head=push(head,40);
    head=push(head,50);
    head=push(head,60);
    head=push(head,70);
    printf("Push:");
    while(t){
        printf("%d ",t->i);
        t=t->link;
    }
    return 0;  
}

//OUTPUT:
//Push: 10 20 30 40 50 60 70
