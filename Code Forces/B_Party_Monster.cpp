#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int size,c1=0;
        string s;
        cin>>size;
        cin>>s;
        if(size%2!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                if(s[i]=='(')
                {
                    c1++;
                }
            }
            if(c1*2==size)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
       

    }
}