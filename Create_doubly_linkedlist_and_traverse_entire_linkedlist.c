#include<stdio.h>
#include<stdlib.h>

//define --prototype-- it is globally accessible
struct ex{
    int i;
    struct ex *left;//left pointer of node    
    struct ex *right;//right pointer of node
};
/*you can't assign the value into prototype it will give compiler error
struct ex{
    int i=0;  //this is invalid   error: expected ‘:’, ‘,’, ‘;’, ‘}’ or ‘__attribute__’ before ‘=’ token
    struct ex *left;
    struct ex *right;
};
*/
void main(){
    
    struct ex *head,*second,*third,*t;//define sruct node pointer to hold memory
    
    //create 3 node by dyanmic memory allocation
    head=(struct ex*)malloc(sizeof(struct ex));
    second=(struct ex*)malloc(sizeof(struct ex));
    third=(struct ex*)malloc(sizeof(struct ex));
    
    //connect 3 node from both side and put the data into list
    head->right=second;
    head->i=1;
    head->left=NULL;
    second->left=head;
    second->i=2;
    second->right=third;
    third->left=second;
    third->i=3;
    third->right=NULL;
    t=head;
    
    //traverse entire linked list
    while(t){
        printf("%d ",t->i);
        t=t->right;
    }
}
