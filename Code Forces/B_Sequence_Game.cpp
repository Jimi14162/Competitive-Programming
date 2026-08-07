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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v,t;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        if(is_sorted(all(v)))
        {
            cout<<n<<"\n";
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<"\n";
        }
        else
        {
            t.pb(v[0]);
            if(v[1]<v[0])
                t.pb(1);
            for(int i=1;i<n-1;i++)
            {
                if(v[i+1]<v[i])
                {
                    t.pb(v[i]);
                    t.pb(1);
                }
                else
                {
                    t.pb(v[i]);
                }
            }
            t.pb(v[n-1]);
            
            cout<<t.size()<<"\n";
            for(int i=0;i<t.size();i++)
            {
                cout<<t[i]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}