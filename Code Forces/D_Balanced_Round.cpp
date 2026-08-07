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
        long long n,k;
        cin>>n>>k;
        vector<long long>v,ans;
        for(int i=0;i<n;i++)
        {
            long long temp;
            cin>>temp;
            v.pb(temp);
        }
        sort(all(v));
        
        if(n==1)
        {
           cout<<"0\n";
        }
        else
        {
            int count=1;
            for(int i=1;i<n;i++)
            {
                if(v[i] - v[i-1] <=k)
                {
                    count++;
                }
                else
                {
                    ans.pb(count);
                    count=1;
                }
            }
            ans.pb(count);
            int m=*max_element(all(ans));
            cout<<n-m<<"\n";
        }

    }   
    return 0;
}