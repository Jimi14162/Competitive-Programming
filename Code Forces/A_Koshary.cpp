#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            cout<<"YES\n";
        }
        else if(a%2!=0 && b%2!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }
}