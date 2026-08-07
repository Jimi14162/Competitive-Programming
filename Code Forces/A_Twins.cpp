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
    vector <int> v;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        v.pb(a);
    }
    if(t==1)
    {
        cout<<1;
    }
    else 
    {
        sort(all(v));
        int index=t-2;
        int sum1=0,sum2=0;
        int count=0;
        for(int i=0;i<t;i++)
        {
            count=0;
            sum1=0;
            sum2=0;
            for(int j=t-1;j>index;j--)
            {
                sum2+=v[j];
                count++;
            }
            for(int k=0;k<=index;k++)
            {
                sum1+=v[k];
            }
            if(sum1<sum2)
            {
                cout<<count;
                break;
            }
            index--;
        }
    }
    return 0;
}