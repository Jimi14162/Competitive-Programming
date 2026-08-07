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
    getline(cin,s);
    int count=0;
    sort(all(s));
    if(s.length()==2)
    {
        count=0;
    }
    else
    {
        int a=97;
       for(int i=a;i<a+26;i++)
       {
        for(int j=0;j<s.length();j++)
        {
            if(s[j]==i)
            {
                count++;
                break;
            }
        }
       }
    }
    cout<<count;
    return 0;
}