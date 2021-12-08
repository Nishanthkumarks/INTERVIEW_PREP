#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*temp,*head,*new;
void to_create(int n)
{
    int i;
    head=NULL;temp=head;
    for(i=0;i<n;i++)
    {
        new=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the element:");
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
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void to_compute()
{
    int count=0;temp=head;
    while(temp!=0)
    {
        count++;
        temp=temp->next;
    }
    printf("\nTOTAL NUMBER OF NODES:%d\n",count);
}
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    to_create(n);
    disp();
    to_compute();
}