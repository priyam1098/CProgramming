#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partiton(int arr[],int p,int r){
    int pivot=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    
    return i+1;
    
}

void quick_sort(int arr[],int p,int r){
    if(p<r){
        int q=partiton(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}


int main(){
    int size,i;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,size-1);
    
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
