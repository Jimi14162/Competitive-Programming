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
    while(n--)
    {
        int size;
        vector<ll> v;
        for(int i=0;i<size;i++)
        {
            ll a;
            cin>>a;
            v.pb(a);

        }
        if(is_sorted(all(v)))
        {
            cout<<"YES\n";
        }
        else
        {
            max(all(x));
        }
    }
    return 0;
}