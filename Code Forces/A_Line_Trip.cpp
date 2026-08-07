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
        int n,x;
        cin>>n>>x;
        vector<int>v,diff;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        diff.pb(v[0]);
        
        for(int i=1;i<n;i++)
        {
            diff.pb(v[i]-v[i-1]);
        }
        diff.pb( (x-v[n-1])*2 );
        cout<<*max_element(all(diff))<<"\n";
    }   
    return 0;
}