#include <stdio.h>

//comparision function
int strcomp(char *a,char *b){
    int i=0;
    while(a[i]==b[i]){
        if(a[i]=='\0'){
            return 0;
        }
        i++;
    }
    return a[i]-b[i];
}

//main
int main(void) {
    char a[]="priycm";
    char b[]="priyam";
    int c=strcomp(a,b);
    printf("%d",c);
	return 0;
}


