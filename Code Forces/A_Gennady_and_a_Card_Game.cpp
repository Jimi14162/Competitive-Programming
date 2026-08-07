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
    string s;
    string my[5];
    getline(cin,s);
    for(int i=0;i<5;i++)
    {
        cin>>my[i];
    }
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(s[0] == my[i][0] || s[1]==my[i][1])
        {
            cout<<"YES";
            break;
        }
        else
        {
            count++;
        }
    }
    if(count==5)
    {
        cout<<"NO";
    }
    return 0;
}