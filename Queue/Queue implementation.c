#include<stdio.h>
#define n 5
int queue[n];
int rear=0;
int front=0;
void insert()
{
    int x;
    printf("enter the elemnt");
    scanf("%d",&x);
    if(rear==n)
    {
        printf("queue overflow");
    }
    else if(rear==0 && front==0){
        rear=front=1;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
    

}
void del()
{
    int item;
    item=queue[front];
    if(rear==0 && front==0){
        printf("Queue is empty");
    }
    else if(rear==front){
        rear=front=0;
    }
    else{
        printf("\n%d is the deleted element",item);
        front++;
    }

}
void display(){
    int temp;
    if(rear==0 && front==0){
        printf("queue is empty");
    }
    else{
    temp=rear;
    rear=front;
    while(rear<=temp){
        printf("\n%d",queue[rear]);
        ++rear;
    } 
  } 
}
void peek()
{
    if(front==0 && rear==0){
        printf("\nqueue is empty");
    }
    else
    {
    
       printf("\n%d is the top most element of the queue ",queue[front]);
    }
}
void main()
{
    insert();
    insert();
    insert();
    display();
    peek();
    del();
    display();
    


}

