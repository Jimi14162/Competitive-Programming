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
        vector<int>v,g;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        sort(all(v));
        int g1=v[0];
        for(int i=1;i<n;i++)
        {
            g1=gcd(g1,v[i]);
        }
        if(g1 > n)
        {
            cout<<"NO\n";
        }
        else
        {
            int check=0;
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(gcd(v[i],v[j])<=2)
                    {
                        check=1;
                        cout<<"YES\n";
                        break;
                    }
                    else
                    {
                        check=0;
                    }
                }
                if(check)
                    break;
            }
            if(!check)
            {
                cout<<"NO\n";   
            }
        }
    }   
    return 0;
}