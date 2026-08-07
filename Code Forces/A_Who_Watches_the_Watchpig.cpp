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
        int size,k;
        string s;
        cin>>size>>k;
        cin>>s;
        if((size/2)<k)
        {
            cout<<-1<<"\n";
        }
        else
        {
            int countr=0,countl=0;
            for(int i=0;i<k;i++)
            {
                if(s[i]=='R')
                {
                    countr++;
                }
            }
            for(int i=size-1;i>=size-k;i--)
            {
                if(s[i]=='L')
                {
                    countl++;
                }
            }
            if(countr==k && countl==k)
            {
                cout<<0<<"\n";
            }
            else
            {
                cout<<(2*k)-countr-countl<<"\n";
            }
        }
    }
    return 0;
}