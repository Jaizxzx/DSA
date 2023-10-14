#include<stdio.h>

int insertionsortasc(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        j = i-1;
        int current  = arr[i];
        while(arr[j]>current&&j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1]  = current;
    }
}
int insertionsortdesc(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        j = i-1;
        int current  = arr[i];
        while(arr[j]<current&&j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]  = current;
    }
}
void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int i,n,j;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c = 1;
    while(c==1){
        int x;
        printf("Enter Choice \n 1 For ascending order \n 2 For descending order \n 3 for display \n 4 for exit ");
        scanf("%d",&x);
        switch(x){
            case 1:
                insertionsortasc(arr,n);
                break;
            case 2:
                insertionsortdesc(arr,n);
                break;
            case 3:
                display(arr,n);
                break;
            case 4:
                c = 0;
                break;
        }
    }

}