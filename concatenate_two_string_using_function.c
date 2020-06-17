#include<stdio.h>
#include<string.h>

void stcat(char *a,char *b){
    int i,j=0;
    
    while(a[i]!='\0'){
        i++;
    }
    
    while(b[j]!='\0'){
        a[i++]=b[j++];
        
    }
    
}
int main(){
    
    char a[12]="priyam ";
    char b[]="gupta";
    
    stcat(a,b);
    printf("%s",a);
    return 0; 
}
