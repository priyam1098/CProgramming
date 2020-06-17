#include <stdio.h>
#include<stdlib.h>
struct node{
        int i;
        struct node *link;
    };

int main()
{
    // Program to create a simple linked using malloc
    // list with 5 nodes 
    struct node *head,*second,*third,*foruth,*five,*t;
    
    head=(struct node*)malloc(sizeof(struct node*));
    second=(struct node*)malloc(sizeof(struct node*));
    third=(struct node*)malloc(sizeof(struct node*));
    foruth=(struct node*)malloc(sizeof(struct node*));
    five=(struct node*)malloc(sizeof(struct node*));
    
    //put the element into nodes
    
    head->i=1;
    head->link=second;
    second->i=2;
    second->link=third;
    third->i=3;
    third->link=foruth;
    foruth->i=4;
    foruth->link=five;
    five->i=5;
    five->link=NULL;
    t=head;
    
    //print the elements
    while(t){
        printf("%d ",t->i);
        t=t->link;
    
    }
    return 0;
}
/*Linked List Traversal
In this  program, we have created a simple linked list with five nodes and  traverse the created list and 
print the data of each node.*/
