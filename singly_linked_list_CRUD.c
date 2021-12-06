#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*new,*temp,*head,*prev,*next;
void disp()
{
temp=head;
    while(temp!=NULL)
    {
    printf("%d ",temp->data);
    temp=temp->next;
    }
}
void create(int n)
{
    int i;
 for(i=0;i<n;i++)
    {
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL)
    {
        head=new;temp=new;
    }
    else
    {
        temp->next=new;temp=new;
    }
    }
}
void insertstart()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
void deletestart()
{
    temp=head;
    head=head->next;
    free(temp);
}
void insertend()
{
    temp=head;
    while(temp->next!=NULL)
    {
    temp=temp->next;
    }
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&new->data);
    temp->next=new;
    new->next=NULL;
}
void deleteend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        if(temp->next->next==NULL)
        {
        free(temp->next);
        temp->next=NULL;
        }
        else
        temp=temp->next;
    }

}
void insertpos(int index)
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    if(count+1==index)
    {
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element:");
    scanf("%d",&new->data);  
    new->next=temp->next;
    temp->next=new;
    break;
    }
    }
}
void deletepos(int index)
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
        if(count+1==index)
        {
           struct node*t=temp->next->next;
            free(temp->next);
            temp->next=t;
            break;
        }
    }
}
int main()
{
    int n,begin;
    printf("Enter the n value:");
    scanf("%d",&n);
    head=NULL;
    create(n);
    disp();
    printf("\n");
    insertstart();
    disp();
    printf("\n");
    deletestart();
    disp();
    printf("\n");
    insertend();
    disp();
    printf("\n");
    deleteend();
    disp();
    printf("\n");
    insertpos(3);
    disp();
    printf("\n");
    deletepos(4);
    disp();
    printf("\n");
    return 0;
}       