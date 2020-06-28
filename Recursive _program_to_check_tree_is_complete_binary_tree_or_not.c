#include<stdio.h>
#include<stdlib.h>
struct node{
    int i;
    struct node *left;
    struct node *right;
};



int iscomplete(struct node *t){
    if(t==NULL)
        return 1;
    if(!t->left && !t->right){
        return 1;
    }
    else if(t->left && t->right){
        return(iscomplete(t->left)&& iscomplete(t->right));
    }
    else{
        return 0;
    }
}
    


int main(){
    struct node *root,*first,*second,*third,*fourth,*six,*seven,*eight,*nine,*t;
    
    //create 8 node of tree
    
    root=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    //fifth=(struct node*)malloc(sizeof(struct node));
    six=(struct node*)malloc(sizeof(struct node));
    seven=(struct node*)malloc(sizeof(struct node));
    eight=(struct node*)malloc(sizeof(struct node));
    nine=(struct node*)malloc(sizeof(struct node));
   // ten=(struct node*)malloc(sizeof(struct node));
    
    t=root;
   
    //put the element into the node
    root->i=20;
    first->i=15;
    second->i=10;
    third->i=17;
   // fourth->i=25;
    //fifth->i=40;
    six->i=2;
    seven->i=12;
    eight->i=16;
    nine->i=18;
    //ten->i=60;
    
    //link all the node of tree
    root->left=first;
    root->right=fourth;
    first->left=second;
    fourth->left=NULL;
    fourth->right=NULL;
    //fifth->right=ten;
    //fifth->left=NULL;
    first->right=third;
    second->left=six;
    second->right=seven;
    third->left=eight;
    third->right=nine;
    six->left=NULL;
    six->right=NULL;
    seven->left=NULL;
    seven->right=NULL;
    eight->left=NULL;
    eight->right=NULL;
    nine->left=NULL;
    nine->right=NULL;
    int x=iscomplete(t);
    printf("%d",x); //if complete print 1 if not print 0
    
    return 0;
}
