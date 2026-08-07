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
        vector<int> v,ans;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            
            if(v[i]%2==0 && v[i+1]%2==0)
            {
                ans.pb(v[i]*v[i+1]);
                count++;
            }
            else if(v[i]%2!=0 && v[i+1]%2!=0)
            {
                ans.pb(v[i]*v[i+1]);
                count++;
            }
            else
            {
                ans.pb(v[i]);
            }
        }
        cout<<count<<"\n";


    }   
    return 0;
}