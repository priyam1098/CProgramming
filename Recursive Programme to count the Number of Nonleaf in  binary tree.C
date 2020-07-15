#include<stdio.h>
#include<stdlib.h>

/*define the prototype of structure will use as a node in programme*/
struct node{
    int i;
    struct node *left;
    struct node *right;
};



int countNonleaf(struct node *t){
    
    if(t==NULL) return 0;//To check t is valid or not
    
    if(!t->left && !t->right){  //if it is Nonleaf return 0
        return 0;
    }
    else{
        return (1+countNonleaf(t->left)+countNonleaf(t->right));//count all Nonleaf
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
    int NumberofNonleaf = countNonleaf(t);//count leaf function
     
    printf("%d",NumberofNonleaf);

    return 0;
}






