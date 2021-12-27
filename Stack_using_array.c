#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void Push()
{
    int x;
    printf("Enter the element:");
    scanf("%d",&x);
    if(top==N-1)
    printf("Overflow of Stack");
    else{ 
        top++;
        stack[top]=x;
    }
}
void Display()
{
    int i;
    for(i=top;i>=0;i--)
    printf("%d ",stack[i]);
}
void Pop()
{
    int item;
    if(top==-1)
    printf("Underflow");
    else
    {
        item=stack[top];
        top--;
        printf("%d",item);
    }
}
void Peek()
{
    if(top==-1)
    printf("Empty Stack");
    else
    printf("%d",stack[top]);
}
int main()
{
    Push();
    Push();
    Push();
    Push();
    printf("After pushing all elements:");
    Display();
    printf("\n");
    printf("Poping the element:");
    Pop();
    printf("\n");
    Display();
    printf("\n");
    printf("Peek Element:");
    Peek();
    printf("\n");
}