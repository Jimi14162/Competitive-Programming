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
        vector<ll int >v;
        for(int i=0;i<n;i++)
        {
            ll int temp;
            cin>>temp;
            v.pb(temp);
        }
        int count=0;
            for(int i=n-1;i>0;i--)
            {
                if(v[i] <= v[i-1])
                {
                    while(v[i-1]!=0 && v[i-1]>=v[i])
                    {
                        v[i-1]/=2;
                        count++;
                    }
                    if(v[i-1]==0 && i!=1)
                    {
                        count=-1;
                        break;
                    }
                }
            }
            for(int i=0;i<n-1;i++)
            {
                if(v[i]==v[i+1])
                {
                    count=-1;
                    break;
                }
            }
            cout<<count<<"\n";
            
    }
    return 0;
}