#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        for(int j=arr[i];j>arr[i]/2;j--)
        {
            cout<<j<<" ";
        }
        for(int k=1;k<=arr[i]/2;k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}