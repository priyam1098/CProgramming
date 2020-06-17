#include <stdio.h>
#include<stdlib.h>

//define the  prototype of structure
struct node{
        int i;
        struct node *link;//self referential node
    };

//main
int main()
{
    //create linked list using 5 node add 6 at begin
    
    struct node *head,*second,*third,*foruth,*five,*six,*t;//define pointer of struct node type
    
    // allocate 5 nodes in the heap 
    head=(struct node*)malloc(sizeof(struct node*));
    second=(struct node*)malloc(sizeof(struct node*));
    third=(struct node*)malloc(sizeof(struct node*));
    foruth=(struct node*)malloc(sizeof(struct node*));
    five=(struct node*)malloc(sizeof(struct node*));
    
    //put the element and link the all nodes
    head->i=1;// assign data in first node 
    head->link=second;// Link node
    
    second->i=2;// assign data in first node 
    second->link=third;// Link node
    
    third->i=3;// assign data in first node 
    third->link=foruth;// Link node
    
    foruth->i=4;// assign data in first node 
    foruth->link=five;// Link node
    
    five->i=5;// assign data in first node 
    five->link=NULL;
    
    //Create that node that ou want insert
    six=(struct node*)malloc(sizeof(struct node*));
    
    six->i=6;// assign data in first node 
    //Insert the node at the begin with the help of head pointer
    six->link=head;
    head=six;
    t=head;
    
    //Print entire linked list
    while(t){
        printf("%d ",t->i);
        t=t->link;
    }
    
    return 0;
}
