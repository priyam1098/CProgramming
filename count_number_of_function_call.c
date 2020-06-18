#include <stdio.h>

int countfunction(){
    static int i;//global and stativ variable initilize to 0 itself.
    return ++i;
    
}

int main(void) 
{ 
    countfunction();
    countfunction();
    countfunction();
    printf("%d",countfunction());
    
  return 0; 
}
