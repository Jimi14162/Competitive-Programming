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
        int n,m;
        cin>>n>>m;
        vector <int> v1,v2;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v1.pb(temp);
        }
        for(int i=0;i<m;i++)
        {
            int temp;
            cin>>temp;
            v2.pb(temp);
        }
        sort(all(v1));
        sort(all(v2));
        if(n<(2*m) || v1[n-1]<v2[m-1] || v1[0]>v2[0])
        {
            cout<<"NO\n";
        }
        else
        {
            int count=0;
            for(int i=0,j=m-1,k=n-1;j>=0;i++,j--,k--)
            {
                if(v1[i]<v2[i])
                {
                    count++;
                }
                if(v1[k]>v2[j])
                {
                    count++;
                }
                if(count==(2*m))
                {
                    break;
                }
                
            }
            if(count==(2*m))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }   
    return 0;
}