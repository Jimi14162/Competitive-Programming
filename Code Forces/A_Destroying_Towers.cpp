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
        vector<int>v;
        int size;
        cin>>size;
        for(int i=0;i<size;i++)
        {
            int c;
            cin>>c;
            v.pb(c);
        }
        for(int i=1;i<size;i++)
        {
            
            if(v[i-1]<v[i])
            {
                v[i]=v[i-1];
            }
        }
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=v[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}