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
    vector<ll int>v;
    for(int i=0;i<n;i++)
    {
        ll int temp;
        cin>>temp;
        v.pb(temp);
    }
    ll int count=0;
    for(int i=0;i<n-1;i++)
    {
       if(v[i]>v[i+1])
       {
            count+=v[i]-v[i+1];
            v[i+1]=v[i];
       }
    }
    cout<<count;
    return 0;
}