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
        vector <int> v1;
        int size1,size2;
        cin>>size1;
        for(int i=0;i<size1;i++)
        {
            int x;
            cin>>x;
            v1.pb(x);
        }
        cin>>size2;
        for(int i=0;i<size2;i++)
        {
            int x;
            cin>>x;
            v1.pb(x);
        }
        int a=1;
        for(int j=0;j<v1.size();j++)
        {
            for(int i=0;i<v1.size();i++)
            {
                if(v1[i]==a)
                {
                    a++;
                }
            }
        }
        if(a==(t+1))
        {
            cout<<"I become the guy.\n";
        }
        else
        {
            cout<<"Oh, my keyboard!\n";
        }
    return 0;
}