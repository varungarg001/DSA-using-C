#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{

        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*secondnode;
    int choice=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;

        }
        printf("if want more node then press 1 and if not then press 0");
        scanf("%d",&choice);

    }
    temp=head;
    printf("\n list after insertion\n");
    while (temp!=0)

   {
        printf("%d",temp->data);
        temp=temp->next;
    }
    
    // insertion at begining
    secondnode=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the data you want to insert\n");
    scanf("%d",&secondnode->data);
    secondnode->next=head;
    head=secondnode;
    temp=head;
    printf("\n list after insertion\n");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

    
    
   


}