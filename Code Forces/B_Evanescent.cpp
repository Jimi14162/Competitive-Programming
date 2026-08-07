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
        string s;
        vector<int>v;
        vector<char>ch;
        cin>>n;
        cin>>s;
        if(n==3)
        {
            if(s[0]==s[2])
            {
                cout<<"1\n";
            }
            else
            {
                cout<<"2\n";
            }
        }
        else
        {
            int count=1;
            for(int i=0;i<n-1;i++)
            {
                if(s[i]!=s[i+1])
                {
                    ch.pb(s[i]);
                    v.pb(count);
                    count=1;
                }
                else
                {
                    count++;
                }
            }
            ch.pb(s[n-1]);
            v.pb(count);
            int c=2;
             for(int i=1 My submission minus one character check the same minus four one index and password index character check character be same minus two minus a b code check size minus one meter zero zero one zero zero;i<v.size()-1;i++)
             {
                if(v[i]==1)
                {
                    if(ch[i-1]==ch[i+1])
                    {
                        c=1;
                        cout<<v.size()-2<<"\n";
                        break;
                    }
                    else
                    {
                        c=0;
                    }
                }
             }
            if(!c)
            {
                cout<<v.size()-1<<"\n";
            }
            else if(c==2)
            {
                cout<<v.size()<<" \n";
            }
        }
    }   
    return 0;
}