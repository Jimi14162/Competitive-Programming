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
        vector<int> v,a,b;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        sort(all(v));
        if(*min_element(all(v))==*max_element(all(v)))
            cout<<"-1\n";
        else
        {
            if(v[n-1]==v[n-2])
            {
                int j=n-1;
                while(v[j]==v[j-1])
                {
                    b.pb(v[j]);
                    j--;
                }
                b.pb(v[j]);
                for(int i=0;i<j;i++)
                {
                    a.pb(v[i]);
                }
            }
            else
            {
                b.pb(v[n-1]);
                for(int i=0;i<n-1;i++)
                {
                    a.pb(v[i]);
                }
            }
            cout<<a.size()<<" "<<b.size()<<" \n";
            for(int i=0;i<a.size();i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            for(int i=0;i<b.size();i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<"\n";
            
        }

    }   
    return 0;
}