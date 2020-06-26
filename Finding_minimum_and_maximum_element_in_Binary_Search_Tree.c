#include<stdio.h>
#include<stdlib.h>
struct node{
    int i;
    struct node *left;
    struct node *right;
};


void least(struct node *t){
    if(t!=NULL){
    while(t->left){
        t=t->left;
    }
    printf("MIN=%d\n",t->i);//print least element 
    }
    else{
         printf("error");
    }
}

void max(struct node *t){
    if(t!=NULL){
    while(t->right){
        t=t->right;
    }
    printf("MAX=%d\n",t->i);//print maximum element
    }
    else{
        printf("error");
    }
}
int main(){
    struct node *root,*first,*second,*third,*fourth,*fifth,*six,*seven,*eight,*nine,*ten,*t,*h;
    
    //create ten node of tree
    
    root=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));
    six=(struct node*)malloc(sizeof(struct node));
    seven=(struct node*)malloc(sizeof(struct node));
    eight=(struct node*)malloc(sizeof(struct node));
    nine=(struct node*)malloc(sizeof(struct node));
    ten=(struct node*)malloc(sizeof(struct node));
    
    t=root;
    h=root;
    //put the element into the node
    root->i=20;
    first->i=15;
    second->i=10;
    third->i=17;
    fourth->i=25;
    fifth->i=40;
    six->i=2;
    seven->i=12;
    eight->i=16;
    nine->i=18;
    ten->i=60;
    
    //link all the node of tree
    root->left=first;
    root->right=fourth;
    first->left=second;
    fourth->left=NULL;
    fourth->right=fifth;
    fifth->right=ten;
    fifth->left=NULL;
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
    
    //call the least and max function
    least(t);
    max(h);
    return 0;
}
