#include<stdio.h>
#include<stdlib.h>
# define n 50
int q[n];
int front = -1;
int rear = -1;
void enqueue(int item){

    if(rear == n-1){
        printf("Overflow\n");
    }
    else if(front==-1 && rear == -1){
        front = rear = 0;
        q[rear] = item;
        rear++;
    }
    else{
        q[rear] = item;
        rear++;
    }
}
void dequeue(){
    if(front==-1 && rear ==-1){
        printf("underflow\n");
    }
    else if(front==rear){
        front = rear = -1;
    }
    else{
        printf("Dequeued element : %d",q[front]);
        front++;
    }
}
void peek(){
    if(front == -1 && rear == -1){
        printf("Underflow\n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("Peek element is : %d",q[front]);
    }
}
void display(){
    int i;
    if(front == -1 && rear == -1){
        printf("Underflow\n");
    }
    else{
        for(i=front;i<rear;i++){
            printf("Element: %d",q[i]);
        }
    }
}


int main(){
    int item,i,c;
    while(c!=1){
        printf("Enter your choice : ");
        scanf("%d",&i);
        switch(i){
            case 1:
                printf("Enter the element to be inserted");
                scanf("%d",&item);
                enqueue(item);
                break;
            case 2:
                dequeue();
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