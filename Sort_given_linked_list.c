#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*temp,*head,*new;
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
void disp()
{
    temp=head;
    while(temp!=NULL)
    {
    printf("%d ",temp->data);
    temp=temp->next;
    }
}
void sort()
{
    struct node*ptr1;
    temp=head;
    int k;
    while(temp->next!=NULL)
    {
        ptr1=temp->next;
        while(ptr1!=NULL)
        {
            if(temp->data>ptr1->data)
            {
                k=temp->data;
                temp->data=ptr1->data;
                ptr1->data=k;
            }
            ptr1=ptr1->next;
        }
        temp=temp->next;
    }
}
int main()
{
    int n;
    printf("Enter the n value:");
    scanf("%d",&n);
    create(n);
    disp();
    printf("\n");
    sort();
    printf("\n");
    disp();
}