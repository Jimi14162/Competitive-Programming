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
        string s;
        cin>>s;
        if(s.find(".")==-1)
        {
            cout<<0<<"\n";
        }
        else
        {
            int dot=0;
            for(int i=0;i<n;i++)
            {
                if(s[i]=='.')
                    dot++;
            }
            if(dot<2)
                cout<<dot<<"\n";
            else
            {
                if(s.find("...")!=-1)
                {
                    cout<<2<<"\n";
                }
                else
                {
                    cout<<dot<<"\n";
                }
            }
        }        
    }   
    return 0;
}