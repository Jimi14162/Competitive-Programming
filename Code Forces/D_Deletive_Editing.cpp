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
        string s,n;
        cin>>s>>n;
        if(n.length()>s.length())
        {
            cout<<"NO\n";
        }
        else if(s==n)
        {
            cout<<"YES\n";
        }
        else
        {
            int upd=0,check=0;
            for(int i=0;i<n.length();i++)
            {
                int ind=s.find(n[i]);
                if(ind==-1)
                {
                    check=0;
                    cout<<"NO\n";
                    break;
                }
                else
                {
                    check=1;
                    s.erase(s.begin()+upd,s.begin()+ind);
                    cout<<"String = "<<s<<"\n";
                    upd++;
                }
            }
            if(check)
            {
                if(s.find(n)>=0)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
    }   
    return 0;
}