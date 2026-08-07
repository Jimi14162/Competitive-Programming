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
        int n,g=1;
        vector<int>l;
        string s;
        cin>>n;
        cin>>s;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='<' && s[i-1]=='<')
            {
                g++;
            }
            else if(s[i]=='>' && s[i-1]=='>')
            {
                g++;
            }
            else
            {
                l.pb(g);
                g=1;
            }
        }
        l.pb(g);
        cout<<1+(*max_element(all(l)))<<"\n";

    }   
    return 0;
}