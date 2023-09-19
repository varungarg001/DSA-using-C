#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct list{
        int data;
        struct list *next;
    };
    struct list *head,*newnode,*lastnode,*temp,*hello;
    int choice=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct list*)malloc(sizeof(struct list));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=hello=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
            hello=temp;

        }
        printf("\nif you want to add further node press 1");
        scanf("%d",&choice);
    }
    temp=head;
    printf("\nlist before insertion\n");
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    // insertion process
    lastnode=(struct list*)malloc(sizeof(struct list));
    printf("\n insert the element ");
    scanf("%d",&lastnode->data);
    lastnode->next=0;
    hello->next=lastnode;
    printf("\n list after insertion\n");
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

}
