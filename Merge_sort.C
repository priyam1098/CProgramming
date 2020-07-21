#include<stdio.h>

//Heart of Alogrithm Merge process
void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L1[n1],L2[n2];
    for(int i=0;i<n1;i++){
        L1[i]=arr[p+i];
    }
    for(int i=0;i<n2;i++){
        L2[i]=arr[q+1+i];
    }
    int i=0,j=0,k=p;
    while(i<n1 && j<n2){
        if(L1[i]<=L2[j]){
           arr[k]=L1[i];
           i++;
        } 
        else{
            arr[k]=L2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=L2[j];
        j++;
        k++;
    }
}

//Divide the problem into subproblem
void mergesort(int arr[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        mergesort(arr,p,q);
        mergesort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,N-1);
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}



/*Time complexity of this Algorithm is = O(nlogn) or theta(nlogn).

Space complexity =O(n) //It is required for extraa space of array(2 half  array)*/

