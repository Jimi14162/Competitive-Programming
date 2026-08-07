#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<cmath>
#include<numeric>
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
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        int ans=INT_MIN;
        if(n==1)
            ans=0;
        for(int i=1;i<n;i++)
        {
            ans=max(ans,(v[i]-v[0]));
        }
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,v[n-1]-v[i]);
            ans=max(ans,v[i]-v[i+1]);
            
        }
        cout<<ans<<"\n";
    }   
    return 0;
}