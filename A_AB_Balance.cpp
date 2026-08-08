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
        string s;
        cin>>s;
        int ab=0,ba=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='a' && s[i]=='b')
            {
                ab++;
            }
            else if(s[i]=='b' && s[i]=='a')
            {
                ba++;
            }
        }
        if(ab==ba)
        {
            cout<<s<<"\n";
        }
        else if(ab>ba)
        {
            
        }

    }   
    return 0;
}