#include <stdio.h>


void push(int *top,int *stack,int item,int max){
    if(*top==max-1){     
        printf("overflow"); //If stack is full
    }
    else{
        *top=*top+1;
        stack[*top]=item;
    }
}

void pop(int *top,int *t){
    if(*top==-1){
        printf("underflow");//if stack is empty
    }
    else{
        int temp=t[*top];
        *top=*top-1;
        printf("%d ",temp);
    }
    
}

int main()
{
    int top=-1;
    int max;
    scanf("%d",&max);//create dyanamic size of array by user
    int stack[max];
    printf("Push:");
    //push the element into stack
    push(&top,stack,10,max);
    push(&top,stack,20,max);
    push(&top,stack,30,max);
    push(&top,stack,40,max);
    push(&top,stack,50,max);
    push(&top,stack,60,max);
    push(&top,stack,70,max);
    push(&top,stack,80,max);
    push(&top,stack,90,max);
    push(&top,stack,100,max);
    //push(&top,stack,200,max);
    
    int temp=0;
    //Print the push element
    while(max--){
        printf("%d ",stack[temp++]);
        
    }
    printf("\n");
    
    printf("Pop:");
    
    //Pop the elememt from the stack
    while(top!=-1){
        pop(&top,stack);
    }

     
    return 0;
}

//OUTPUT:
/*Push:10 20 30 40 50 60 70 80 90 100 
  Pop: 100 90 80 70 60 50 40 30 20 10 */
