#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void insert(){
    int x,choice=1;
    struct node *newnode;
    while(choice==1){
    printf("enter the element");
    scanf("%d",&x);
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=x;
            newnode->next=0;
            if(rear==0&&front==0){
                front=rear=newnode;
            }
            else{
                rear->next=newnode;
                rear=newnode;
            }
            printf("\n if you want more node press 1");
            scanf("%d",&choice);
            
        }
    
}
void del()
{
    struct node *temp; 
    temp=front;
    if(front==0&&rear==0){
        printf("queue is empty");
    }
    else{
        printf("\n %d is the deleted element",front->data);
        front=front->next;
        free(temp);

    }
}
void display()
{
    struct node *temp;
    if(rear==0&&front==0){
        printf("queue is empty");

    }
    else{
        temp=front;
        while(temp!=0){
            printf("\n%d",temp->data);
            temp=temp->next;
        }

    }

}
void peek(){
    if(rear==0&&front==0){
        printf("queue is empty");
    }
    else{
        printf("\n %d is the top most element of the queue",front->data);
    }    

}
void main()
{
    insert();
    display();
    peek();
    del();
    display();
}