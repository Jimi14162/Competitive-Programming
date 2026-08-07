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
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                zero++;
            else 
                one++;
        }
        int freq[2]={0};
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                freq[s[i]]++;
            }
        }
        if(freq[0]==freq[1])
        {
            cout<<freq[0]*2<<"\n";
        }
        else
        {
            if(freq[0]>freq[1])
            {
                cout
            }
        }
    }   
    return 0;
}