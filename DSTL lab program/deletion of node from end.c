#include<stdlib.h>
#include<stdio.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp,*previousnode;
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
    temp=head;
    while(temp->next!=0)
    {
        previousnode=temp;
        temp=temp->next;
    }
    if(head==temp)
    {
        head=0;
    }
    else
    {
        previousnode->next=0;
    }
    free(temp);

    //print the list
    previousnode=head;
    while(previousnode!=0)
    {
        printf("%d",previousnode->data);
        previousnode=previousnode->next;
    }


}