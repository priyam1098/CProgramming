#include<stdio.h>
#include<stdlib.h>
struct node{
    int i;
    struct node *left;
    struct node *right;
};



int countleaf(struct node *t){
    
    if(t==NULL) return 0;//To check t is valid or not
    
    if(!t->left && !t->right){  //if it is leaf return 1
        return 1;
    }
    else{
        return (countleaf(t->left)+countleaf(t->right)); // go to left and go to the right when leaf if condition will execute and return no of leaf
    }
}



int main(){
    
    //declare node pointer  of tree
    struct node *root,*first,*second,*third,*fourth,*fifth,*six,*t;
    

    //Create struct type node of tree

    root=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    six=(struct node*)malloc(sizeof(struct node));
    

   

    //put the element into the node
    root->i=20;
    first->i=15;
    second->i=10;
    third->i=17;
    fourth->i=25;
    fifth->i=40;
    six->i=2;
    
    //link all the node of tree
    root->left=first;
    root->right=second;
    
    first->left=third;
    first->right=fourth;
    
    second->right=six;
    second->left=fifth;
    
    fourth->left=NULL;
    fourth->right=NULL;
    
    fifth->right=NULL;
    fifth->left=NULL;
    
    third->left=NULL;
    third->right=NULL;
    
    six->left=NULL;
    six->right=NULL;
    
    //count leaf
    t=root; 
    int Numberofleaf = countleaf(t);//count leaf function
     
    printf("%d",Numberofleaf);

    return 0;
}






