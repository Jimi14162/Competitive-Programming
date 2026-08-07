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
    int size;
    cin>>size;
    string s;
    cin>>s;
    int sum=0;
    string c="";
    
    for(int i=0;sum<size;i++)
    {
        sum+=i;
        c+=s[sum];
    }
    c.pop_back();
    cout<<c;
    
    return 0;
}