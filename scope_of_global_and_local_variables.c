#include<stdio.h>

int i=25;//global variale

void fun1(){
    int i=50;//local will get higher scope within block
    printf("%d ",i);
}
void fun2(){
    fun1();
    printf("%d ",i);
    
}
//main
int main(){
    fun1();
    fun2();
    
    return 0;
}
