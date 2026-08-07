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
        if(n==1)
        {
            ll int temp;
            cin>>temp;
            cout<<"0\n";
        }
        else
        {
            vector<ll int> v,diff;
            for(int i=0;i<n;i++)
            {
                ll int temp;
                cin>>temp;
                v.pb(temp);
            }
            sort(all(v));
            int count=0;
            for(int i=0;i<n-1;i++)
            {
                if(v[i]==v[i+1])
                    count++;
                else
                {
                    diff.pb(count);
                    count=0;
                }
            }
            diff.pb(count);
            int p=*max_element(all(diff));
            p++;
            
                count=0;
                while(p<(n+1)/2)
                {
                    count+=p+1;
                    p*=2;
                }
                if(p<n)
                {
                    count+=1+n-p;
                }
                cout<<count<<"\n";

        }
    }   
    return 0;
}