#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin>>n;
    ll count=0;
    for(int i=1;i<=n;i++)
    {
        count+=i;
    }   
    if(count%2)
        cout<<"NO\n";
    else
    {
        ll sum=0;
        cout<<"YES\n";
        vector<int>v1,v2;
        int size=n;
        while((count/2) - sum >=size)
        {
            sum+=size;
            v1.pb(size);
            size--;
        }
        if(count/2 - sum !=0)
            v1.pb((count/2)-sum);
        int j=0;
        sort(all(v1));
        for(int i=1;i<=n;i++)
        {
            if(v1[j]==i)
            {
                j++;
                continue;
            }
            else
            {
                v2.pb(i);
            }
        }
        sort(all(v2));
        cout<<v1.size()<<"\n";
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<"\n"<<v2.size()<<"\n";
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
    }
    return 0;
}