#include <stdio.h>
#include<stdlib.h>

//define prototype of structure 
struct node{
        int i;
        struct node *link;
    };

int main()
{
   //create linked list
    struct node *head,*second,*third,*foruth,*five,*six,*seven,*t;
    head=(struct node*)malloc(sizeof(struct node*));
    second=(struct node*)malloc(sizeof(struct node*));
    third=(struct node*)malloc(sizeof(struct node*));
    foruth=(struct node*)malloc(sizeof(struct node*));
    five=(struct node*)malloc(sizeof(struct node*));
    six=(struct node*)malloc(sizeof(struct node*));
    seven=(struct node*)malloc(sizeof(struct node*));
    
    //put the element and link the node
    head->i=1;
    head->link=second;
    
    second->i=2;
    second->link=third;
    
    third->i=3;
    third->link=foruth;
    
    foruth->i=4;
    foruth->link=five;
    
    five->i=5;
    five->link=six;
    
    six->i=6;
    six->link=NULL;
    t=head;
    
    seven->i=7;
    
    //reach to the end of linked list to insert new node
    while(t->link){
        t=t->link;
    }
    
    //Insert the seven node
    t->link=seven;//link the last node to the seven node 
    seven->link=NULL;//put the null at the end of new inserted node
    t=head;
    
    //traverse the entire list
    while(t){
        printf("%d ",t->i);
        t=t->link;
        
    }
    return 0;
}
