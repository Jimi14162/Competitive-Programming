#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    multimap <int ,int>maps;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        maps.insert({a,b});
    }
    int count=0;
    for(auto x :  maps)
    {
        int temp=x.first;
        if(n>temp)
        {
            n+=x.second;
            count++;
        }
        else
        {
            break;
        }
    }
    if(count==m)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}