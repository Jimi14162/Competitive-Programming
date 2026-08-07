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
        ll n,k,m;
        cin>>n>>k>>m;
        if(k>m)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<m-k+1<<" ";
            for(int i=0;i<n-1;i++)
            {
                cout<<1<<" ";
            }
            cout<<"\n";
        }
        
        
    }
    return 0;
}