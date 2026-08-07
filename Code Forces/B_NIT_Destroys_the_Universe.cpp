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
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                c=1;
            }
            else
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            cout<<"0\n";
        }
        else
        {
            int i=0,j=n-1;
            while(v[i]==0)
            {
                i++;
            }
            while(v[j]==0)
            {
                j--;
            }
            int check=1;
            for(int k=i+1;k<j;k++)
            {
                if(v[k]==0)
                {
                    check=0;
                    cout<<"2\n";
                    break;
                }
                else
                {
                    check=1;
                }
            }
            if(check)
                cout<<"1\n";
        }
    }   
    return 0;
}