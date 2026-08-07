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
        vector<int>v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        int s=0;
        for(int i=0;i<n;i++)
            {
            s^=v[i];
        }
        if(n%2==0)
        {
            
            if(!s)
                cout<<"0\n";
            else
                cout<<"-1\n";
        }
        else
        {
            cout<<s<<"\n";
        }
    }
   return 0;
}