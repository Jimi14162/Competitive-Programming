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
    int n;
    cin>>n;
    while(n--)
    {
        vector <int> v;
        int a,b;
        cin>>b;
        for(int i=0;i<b;i++)
        {
            cin>>a;
            v.pb(a);
        }
        if(b%2!=0)
        {
            cout<<"NO\n";
        }
        else 
        {
            int count=0;
            int sum=0;
            for(int i=0;i<v.size();i++)
            {
                sum+=v[i];
                if(v[i]==1)
                    count++;
            }
            if(sum==0)
            {
                cout<<"YES\n";
            }
            else
            {
                if(abs(count*2-b)%4==0)
                {
                    cout<<"YES\n";
                }
                else
                {
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}