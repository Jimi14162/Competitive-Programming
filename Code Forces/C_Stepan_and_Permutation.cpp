#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<cmath>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        vector <ll> v;
        int size,x,y;
        cin>>size>>x>>y;
        for(int i=0;i<size;i++)
        {
            int b;
            cin>>b;
            v.pb(b);
        }
        if(is_sorted(all(v)))
        {
            cout<<"YES\n";
        }
        else
        {
            int temp=__gcd(x,y);
            if(size>100)
                size/=10;
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size-temp;j++)
                {
                    if(v[j] > v[j+temp])
                    {
                        swap(v[j],v[j+temp]);
                    }
                }
            }
            if(is_sorted(all(v)))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }
    return 0;
}