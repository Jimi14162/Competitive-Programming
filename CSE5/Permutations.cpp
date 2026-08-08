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

int main() 
{
    int n;
    cin>>n;
    if(n<4 && n>1)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        vector<int>v1,v2;
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            {
                v1.pb(i);
            }
            else
                cout<<i<<" ";
        }
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
    }
    return 0;
}