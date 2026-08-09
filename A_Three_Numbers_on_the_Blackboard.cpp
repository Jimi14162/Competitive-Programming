#include<bits/stdc++.h>

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
        vector<ll> v;
        for(int i=0;i<3;i++)
        {
            ll temp;
            cin>>temp;
            v.pb(temp);
        }
        sort(all(v));
        ll min1=v[2]-v[0];
        ll min2=v[1];
        cout<<min(min1,min2)<<"\n";
    }   
    return 0;
}