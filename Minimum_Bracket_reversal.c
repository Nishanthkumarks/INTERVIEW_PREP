#include<stdio.h>
int min(char s[],int len)
{
    if(len%2!=0)
    return -1;
    int in=0,open=0;
    for(int j=0;j<len;j++)
    {
        if(s[j]=='{')
        open++;
        else
        {
            if(open!=0)
            open=open-1;
            else
            in++;
            open=1;
        }
    }
    return in+(open/2);
}
int main()
{
    int len;
    printf("Enter the length:");
    scanf("%d",&len);
    int s[len];
    scanf("%s",s);
    int inv=min(s,len);
    if(inv!=-1)
    printf("Minimum inversions:%d\n",inv);
    else
    printf("Invalid Reversal\n");
}