#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,check=0;
        vector<long long> v;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            long long b;
            cin>>b;
            v.push_back(b);
        }
        if(a==1)
        {
            cout<<"YES\n";
        }
        else
        {
            for(int i=1;i<a;i++)
            {
                if(v[i-1]>i)
                {
                    v[i]+=v[i-1]-i;
                    v[i-1]=i;
                }
            }
            for(int i=1;i<a;i++)
            {
                if(v[i]>v[i-1])
                {
                    check=1;
                }
                else
                {
                    check=0;
                    break;
                }
            }
            if(check)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}