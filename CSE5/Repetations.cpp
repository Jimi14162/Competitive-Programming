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
    cin>>s;
    int max=0,count=1;;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
        else
        {
            if(count>max)
                max=count;
            count=1;
        }
    }  
    if(count>max)
                max=count;
    cout<<max<<"\n"; 
    return 0;
}