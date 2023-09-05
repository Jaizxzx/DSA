#include<stdio.h>
#include<stdio.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head;

void insert_begin(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    int val;
    if(head==NULL){
        printf("Enter value to be inserted");
        scanf("%d",&val);
        temp->data = val ;
        temp->prev = NULL;
        temp->next = NULL;
        head = temp;
    }
    else{
        printf("Enter value to be inserted");
        scanf("%d",&val);
        temp->data = val ;
        temp->prev = NULL;
        temp->next = head;
        head = temp;
    }
}
void insert_last(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    struct node* temp1;
    int val;
    temp1 = head;
    printf("Enter the element to be inserted :");
    scanf("%d",&val);
    temp->data =val;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next =temp;
    temp->prev = temp1;
    temp->next= NULL;
}
void random_insert(){
    struct node* temp;
    struct node* temp1;
    int val,i,loc;
    temp1 = head;
    temp =(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted :");
    scanf("%d",&val);
    printf("Enter the location to insert the value : ");
    scanf("%d",&loc);
    temp->data = val;
    for(i=0;i<loc;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1 ->next;
    temp->prev = temp1;
    temp1->next = temp;
    temp->next->prev = temp;
}
void delete_begin(){
    struct node* temp;
    if(head==NULL){
        printf("Empty list can not delete. ");
    }
    else if(head->next==NULL){
        head = NULL;
        free(head);
    }
    else{
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}
void last_delete(){
    struct node* temp;
    struct node* temp1;
    temp1 = head;
    while(temp->next != NULL){
        temp = temp1;
        temp1 = temp1->next;
    }
    temp->next=NULL;
    free(temp1);
}
void random_delete(){
    struct node* temp;
    struct node* temp1;
    int loc,i;
    printf("Enter position of node to delete :");
    scanf("%d",&loc);
    temp1 =head;
    for(i=0;i<loc;i++){
        temp1 = temp1->next;
    }
    temp = temp1->next;
    temp->prev = temp1->prev;
    temp1->prev->next = temp;
    free(temp1);
    printf("Node deleted");
}
void display(){
    struct node* temp;
    temp = head;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}
int main(){
    head = NULL;
    int i,c;
    while(c!=1){
        printf("Enter your choice : ");
        scanf("%d",&i);
        switch(i){
            case 1:
                insert_begin();
                break;
            case 2:
                insert_last();
                break;
            case 3:
                random_insert();
                break;
            case 4:
                delete_begin();
                break;
            case 5:
                last_delete();
                break;
            case 6:
                random_delete();
                break;
            case 7:
                display();
                break;
            case 8:
                c = 1;
                break;
        }
    }
}