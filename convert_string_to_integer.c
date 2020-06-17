#include<stdio.h>

int convert_string_to_int(char *a){
    int i=0,n=0;
    for(;a[i]>='0'&&a[i]<='9';i++){
        n=10*n+(a[i]-'0');
    }
    return n;
}

//main
int main(){
    char a[]="123456";
    int n=convert_string_to_int(a);
    printf("%d",n);
    return 0;
}
