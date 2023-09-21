#include<stdlib.h>
#include<stdio.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*delete;
    head=0;
    int choice=1;
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
        printf("if you want to continue then press 1 and if not then press 0");
        scanf("%d",&choice);
    }
    if(head==0)
    {
        printf("list is empty");
    }
    else
    {
        delete=head;
        head=head->next;
        free(delete);
    }
    
    //list after deletion
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}