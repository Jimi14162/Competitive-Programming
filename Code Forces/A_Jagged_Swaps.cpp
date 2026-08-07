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
        vector <int> v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        if(v[0]!=1)
        {
            cout<<"NO\n";
        }
        else
        {
                for(int i=1;i<n-1;i++)
                {
                    if(v[i] > v[i-1] && v[i] > v[i+1])
                    {
                        swap(v[i],v[i+1]);
                    }
                }

            if(is_sorted(all(v)))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }   
    return 0;
}