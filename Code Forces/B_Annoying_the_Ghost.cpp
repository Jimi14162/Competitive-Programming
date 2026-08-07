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
        vector <ll> v1,v2;
        for(int  i=0;i<2*n;i++)
        {
            ll a;
            cin>>a;
            v1.pb(a);
            if(i>n-1)
            {
                v2.pb(a);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v1[i];
            sum-=v2[i];
        }
        if(sum)
        {
            if(is_sorted(all(v1)))
                cout<<0<<"\n";
            else
            {
                
            }
        }
    }
    return 0;
}