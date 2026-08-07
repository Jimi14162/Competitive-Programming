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
        long long int a,b,n;
        cin>>a>>b>>n;
        vector<long long  int>v;
        for(int i=0;i<n;i++)
        {
            long long int temp;
            cin>>temp;
            v.pb(temp);
        }
        long long int t1=0;
        t1+=b-1;
        b=1;
        sort(all(v));
        for(int i=0;i<n;i++)
        {
            if(v[i]+b > a)
            {
                b=a;
            }
            else
            {
                b+=v[i];
            }
            t1+=b-1;
            b=1;
        }
        cout<<t1+1<<"\n";
    }   
    return 0;
}