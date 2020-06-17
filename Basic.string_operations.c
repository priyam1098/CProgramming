#include<stdio.h>
#include<string.h>

int main(){
    
    char a[12]="priyam ";
    char b[]="gupta";
    
    //strcat(a,b); //used for concatenate b to a
    
    //strncat(a,b,4); // concatenate length n element to a
    
    char c[]="priyam";
    char d[]="priyanka";
    
    printf("%d\n",strcmp(c,d));//campare two string 
    
    printf("%d\n",strncmp(c,d,6));//campare n element 
    
    printf("%u\n",strchr(d,'a'));//give pointer of first occurence of a
    
    printf("%u\n",strrchr(d,'a'));//give pointer to last occurence of  a
    
    
    
}
