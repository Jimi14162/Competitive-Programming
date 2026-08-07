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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            ++temp;
            v.pb(temp);
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            
            for(int i=1;i<n;i++)
            {
                if(c>n)
                    break;
                if(v[i]%v[i-1] == 0)
                {
                    v[i]++;
                    c++;
                }
            }
            if(c>n)
                break;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}