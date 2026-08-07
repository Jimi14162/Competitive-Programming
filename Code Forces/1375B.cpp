#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        int size,count=0;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        for(int a=0;a<size;a++)
        {
            for(int b=1;b<size;b++)
            {
                if(arr[b-1]>arr[b])
                {
                    arr[b-1]/=2;
                    count++;
                }
            }
        }
        arr[i]=count;
    }
}