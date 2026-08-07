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
        int f=s.find_first_of("1");
        int l=s.find_last_of("1");
        int count=0;
        for(int i=f;i<l;i++)
        {
            if(s[i]=='0')
            {
                count++;
            }
        }
        cout<<count<<"\n";
        
    }
    return 0;
}