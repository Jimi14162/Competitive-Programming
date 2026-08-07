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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(all(s));
        int count=1,b=0;
        vector<int>v;
        if(n-k<2)
        {
            cout<<"YES\n";
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    v.pb(count);
                    count=1;
                }
                else
                {
                    count++;
                }
            }
            v.pb(count);
            for(int i=0;i<v.size();i++)
            {
                if(v[i]%2)
                {
                    b++;
                }
            }
            if(b<=k+1)
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