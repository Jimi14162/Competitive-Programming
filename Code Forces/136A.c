#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        brr[arr[i]-1]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }
}