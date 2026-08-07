#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y==0)
        {
            s[i]="NO";
        }
        else if(x%y==0)
        {
            s[i]="YES";
        }
        else
        {
            s[i]="NO";
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}