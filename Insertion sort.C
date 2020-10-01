#include<stdio.h>
int main(){
    
      /* Here i & j for loop counters, key for swapping,
    * count for total number of elements, number[] to
    * store the input numbers in array. You can increase
    * or decrease the size of number array as per requirement
    */
    
    int N,key,i,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    // Implementation of insertion sort algorithm
    for(j=1;j<N;j++){
        key=arr[j];
        i=j-1;
        while( i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
    
    //print sorted array
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
