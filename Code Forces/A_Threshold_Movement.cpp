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
        int a;
        cin>>a;
        vector <int> v;
        for(int i=0;i<a;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        vector <int> temp;
        temp=v;
        sort(all(temp));
        if(a%2!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            int mi=v[0],mx=v[1];
            for(int i=0;i<a;i++)
            {
                if(i%2==0)
                {
                    mi=min(mi,v[i]);
                }
                else
                {
                    mx=max(mx,v[i]);
                }
            }
            if(mi-mx > 1)
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