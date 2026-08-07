#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<2020)
            cout<<"NO\n";
        else if(arr[i]==2020 || arr[i]==2021)
            cout<<"YES\n";
        else    
        {
            int a=arr[i]/2020;
            int b=arr[i]/2021;
            if(arr[i]-(a*2020)-(b*2021)==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}