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
        int a;
        cin>>a;
        string s;
        cin >> s ;
        if(a!=5)
        {
            cout<<"NO\n";
        }
        else
        {
            if(s.find("T") + s.find("r") + s.find("i") + s.find("m") + s.find("u") == 10 )
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}