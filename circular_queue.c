#include<stdio.h>
#include<stdlib.h>
# define n 50
int q[n];
int front = -1, rear = -1;
void enqueue(int item){
     if(front == -1 && rear == -1 ){
        front = rear = 0;
        q[rear] = item;
        rear = rear+1;
     }
     else if((rear+1%n) == front){
        printf("Queue Overflow.\n");
     }
     else{
        q[rear] = item;
        rear = (rear+1)%n;
    }
}
void dequeue(){
    if(front==-1 &&rear== -1){
        printf("Underflow.\n");
    }
    else if(front==rear){
        front = rear = -1;
    }
    else{
        printf("Dequeued Element is : %d\n",q[front]);
        front = (front+1)%n;
    }
}
void peek(){
    if(front==-1&&rear==-1){
        printf("Empty Queue\n");
    }
    else{
        printf("Peek Element is : %d\n", q[front]);
    }
}
void display(){
    int i;
    for(i = front; i<rear; i= (i+1)%n){
        printf("Elements : %d\n",q[i]);
    }
}

int main(){
    int i,c,item;
    while(c!=1){
        printf("Enter your choice : \n");
        scanf("%d",&i);
        switch(i){
            case 1:
                printf("Enter value to insert : \n");
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
                c=1;
                break;
        }
    }
}