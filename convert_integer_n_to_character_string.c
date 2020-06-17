#include<stdio.h>

void reverse(char *c,int j){
    int i;
    for(i=0,j=j-1;i<j;i++,j--){
        int temp=c[i];
        c[i]=c[j];
        c[j]=temp;
    }
}
//integer to character
void itoa(int n,char *c){
    int i=0,sign;
    if((sign=n)<0){
        n=-n;
    }
    int mod;
    while(n){
        mod=n%10;
        c[i++]=mod+'0';
        n=n/10;
    }
    if(sign<0){
        c[i++]='-';
    }
    c[i]='\0';
    reverse(c,strlen(c));
}
//main
int main(){
    int n=-123;
    char s[5];
    itoa(n,s);
    printf("%s",s);
    
}
