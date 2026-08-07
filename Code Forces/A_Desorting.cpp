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
        vector<int>v,diff;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        if(!is_sorted(all(v)))
            cout<<"0\n";
        else
        {
            for(int i=0;i<n-1;i++)
            {
                diff.pb(v[i+1]-v[i]);
            }
            cout<<(*min_element(all(diff))+2)/2<<"\n";
        }
    }   
    return 0;
}