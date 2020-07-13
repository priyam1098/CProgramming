#include<stdio.h>
#include<stdlib.h>
struct node{
    int i;
    struct node *link;
};
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
    
    t=head;
    int count=0;
    
    //count total number of nodes
    while(t){
        t=t->link;
        count++;
    }
    
    //print  middle element 
    x=head;
    for(int j=0;j<(count/2)+1;j++){
        if(j==count/2){
            printf("%d",x->i);
        }
        x=x->link;
    }
    return 0;
    
}
