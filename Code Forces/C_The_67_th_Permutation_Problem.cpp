#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        for(int i=1,j=3*a;i<=a;i++,j-=2)
        {
            cout<<i<<" "<<j-1<<" "<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}