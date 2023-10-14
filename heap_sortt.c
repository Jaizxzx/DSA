#include<stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left < n && arr[left]>largest){
        largest  = left;
    }
    if(right<n && arr[right]>largest){
        largest = right;
    }
    if(largest != i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n){
    int i,j;
    for(i = (n/2) -1 ;i>=0;i--){
        heapify(arr,n,i);
    }
    for(i = n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int i,n;
    printf("Enter the number of elemnts : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements to be inserted : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    heapsort(arr,n);
    display(arr,n);
}