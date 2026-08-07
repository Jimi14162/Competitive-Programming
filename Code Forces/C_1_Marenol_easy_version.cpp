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
        string a,b;
        cin>>a;
        cin>>b;
        int even1=0,odd1=0;
        int even2=0,odd2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                if(i%2==0)
                {
                    even1++;
                }
                else
                {
                    odd1++;
                }
            }
            if(b[i]=='1')
            {
                if(i%2==0)
                {
                    even2++;
                }
                else
                {
                    odd2++;
                }
            }
        }
        if((even1==even2) && (odd1==odd2))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
   return 0;
}