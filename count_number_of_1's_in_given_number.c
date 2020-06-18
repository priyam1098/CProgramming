#include<stdio.h>

int bitcount(int b){
    int i;
    for(i=0;b!=0;b=b>>1){
        if(b&1){
            i++;
        }
        
    }
    return i;
}
//main
int main(){
    int b=15;
    int c=bitcount(b);//call function
    printf("%d",c);
    return 0;
}
