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
        int a=s.find("1");
        
        if(a!=-1)
        {
            s.erase(a,1);
            int b=s.find("0");
            if(b!=-1)
            {
                s.erase(b,1);
            }
            
        }
        cout<<s<<"\n";
    }   
    return 0;
}