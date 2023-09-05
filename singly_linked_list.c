#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head;
void begin_insert(){
    int val;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node*));
    printf("Enter a  value to insert : ");
    scanf("%d",&val);
    temp->data=val;
    temp->next=head;
    head=temp;
}
void random_insert(){
    int loc,i;
    struct node* temp;
    struct node* temp1;
    temp = (struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter value to be inserted :");
    scanf("%d",&val);
    printf("enter the position to which th enode will be inserted : ");
    scanf("%d",&loc);
    temp->data = val;
    temp1=head;
    for(i=0;i<loc;i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}
void insert_last(){
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    struct node* temp1;
    int val;
    temp1 = head;
    printf("Enter the value to be inserted at the last : ");
    scanf("%d",&val);
    temp->data = val;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    temp->next = NULL;
}
void begin_delete(){
    struct node* temp;
    if(head==NULL){
        return "List is empty";
    }
    else{
        temp = head;
        head = temp->next;
        free(temp);
    }
}
void last_delete(){
    struct node* temp;
    struct node* temp1;
    temp1 = head;
    while(temp1->next!=NULL){
        temp = temp1;
        temp1 = temp1->next;
    }
    temp->next= NULL;
    free(temp1);
}
void random_delete(){
    int i,loc,j;
    struct node* temp;
    struct node* temp1;
    printf("Enter the poisition to which you want to delete the element");
    scanf("%d",&loc);
    temp1 = head;
    for(i=0;i<loc;i++){
        temp = temp1;
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    free(temp1);

}
void display(){
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->next;
    }
}

int main(){
    head = NULL;
    int i,c=0;
    while(c!=1){
        printf("Enter your choice /n1. Insert at begin/n2. Insert at random location /n3. Insert at last /n4. Delete beginning /n5. delete last /n6. delete random /n7.random delete/n8. Exit");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            begin_insert();
            break;
        case 2:
            insert_last();
            break;
        case 3:
            random_insert();
            break;
        case 4:
            begin_delete();
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
        default:
            break;
        }
    }
}
