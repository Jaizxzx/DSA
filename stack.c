#include<stdio.h>
#include<stdlib.h>
#define n 50
int s[n];
int top = -1;
void push(int item){
    if(top == (n-1)){
        printf("Stack Overflow.\n");
    }
    else if(top == -1){
        top++;
        s[top] = item;
    }
    else{
        top++;
        s[top] = item;
    }
}
void pop(){
    if(top == -1){
        printf("Stack Underflow.\n");
    }
    else{
        int del;
        del = s[top];
        printf("Deleted item : %d",del);
        top = top -1;
    }
}
void peek(){
    if(top == -1 ){
        printf("Stack Underflow.\n");
    }
    else{
        printf("Peek Element is : %d \n",s[top]);
    }
}
void display(){
    int i;
    if(top == -1 ){
        printf("Stack Underflow. \n");
    }
    else{
        for(i=0;i<=top;i++){
            printf("Element : %d",s[i]);
        }
    }
}




int main(){
    int i ,item,c=0;
    while(c!=1){
        printf("Please Enter Your Choice : ");
        scanf("%d",&i);
        switch(i){
            case 1:
                printf("Enter element to push :");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                c = 1;
                break;
        }
    }
}