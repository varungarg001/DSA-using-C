#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node
    {
        int data;
        struct node *next;

    };
    struct node *head,*temp,*newnode;
    int choice=1,search,i=0,count=1;
    head=0;
    while(choice==1)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=0;
        printf("\nenter data");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("if you want more link then press 1 or not press 0\n");
        scanf("%d",&choice);
    }
    // searching
    temp=head;
    printf("enter the element you want to search");
    scanf("%d",&search);
    while(temp!=0)
    { 
        i++;
        if(temp->data==search)
        {
            count++;
            printf("%d element is found at %d position",search,i);
            temp=temp->next;
        }
        else
        {
            temp=temp->next;
        }
        
        

    }
    if(count==1)
    {
        printf("element not found");
    }

}
