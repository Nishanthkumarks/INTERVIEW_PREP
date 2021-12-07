#include<stdio.h>
int binarysearch(int arr[],int l,int h,int k)
{
    int m=(l+h)/2;
    if(arr[m]==k)
        return m;
    if(arr[m]>k)
        return binarysearch(arr,l,m-1,k);
    if(arr[m]<k)
        return binarysearch(arr,m+1,h,k);
    else
        return -1;
}
int main()
{
    int n,k,l,h,res;
    printf("Enter the n value:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the key to find:");
    scanf("%d",&k);
    l=0;h=n-1;
    res=binarysearch(arr,l,h,k);
    if(res==-1)
    printf("Element not found");
    else
    printf("Element found at index:%d\n",res);
}