#include<stdio.h>
#include<string.h>

void reverse(char *c,int j){
    int i;
    for(i=0,j=j-1;i<j;i++,j--){
        int temp=c[i];
        c[i]=c[j];
        c[j]=temp;
    }
}


int main(){
    char c[]="priyam";
    reverse(c,strlen(c));
    printf("%s",c);
    return 0;
}
