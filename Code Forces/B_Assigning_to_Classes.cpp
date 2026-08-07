#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<algorithm>
#include<cmath>
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
        vector<int>v,t1,t2;
        for(int i=0;i<2*n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        sort(all(v));
        if(n==1)
        {
            cout<<abs(v[0]-v[1])<<"\n";
        }
        else if(n%2!=0)
        {
            for(int i=0;i<2*n;i++)
            {
                if(i%2==0)
                    t1.pb(v[i]);
                else
                    t2.pb(v[i]);
            }
            cout<<abs(t1[ (t1.size()) /2]-t2[ (t2.size()) /2])<<"\n";
        }
        else
        {
            t2.pb(v[0]);
            for(int i=1;i<2*n;i++)
            {
                if(i%2==0)
                    t1.pb(v[i]);
                else
                    t2.pb(v[i]);
            }
            cout<<abs(t1[ (t1.size()) /2]-t2[ (t2.size()) /2])<<"\n";

        }
    }   
    return 0;
}