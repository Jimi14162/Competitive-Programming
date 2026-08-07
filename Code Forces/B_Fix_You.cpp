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
        string s[n];
        for(int  i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int count=0;
        for(int i=0;i<s[0].length()-1;i++)
        {
            if(s[0][i]=='D')
            {
                count++;
            }
        }
        for(int i=1;i<n;i++)
        {
            if(s[i][s[0].length()-1]=='R')
            {
                count++;
            }

        }
        if(s[0][s[0].length()-1]=='R')
            count++;
        cout<<count<<"\n";
    }   
    return 0;
}