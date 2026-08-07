#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include<cmath>
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
        int num;
        cin>>num;
        int count=0,copy=num;
        vector <int> v,v1;
        while(copy!=0)
        {
            v.pb(copy%10);
            copy/=10;
        }

        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                continue;
            }
            else
            {
                int temp;
                count++;
                temp=pow(10,i);
                v1.pb(v[i]*temp);

            }
        }
        cout<<count<<"\n";
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
    }
       
    return 0;
}