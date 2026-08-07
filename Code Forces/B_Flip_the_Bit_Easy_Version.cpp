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
        int size,k,p;
        vector <int> v;
        cin>>size>>k;
        for(int i=0;i<size;i++)
        {
            int temp;
            cin>>temp;
            v.pb(temp);
        }
        cin>>p;
        int bin=v[p-1];
        int i=0,j=size-1,count=0;
        while(i!=p || j!=p)
        {
            if(v[i]==bin && i!=p)
            {
                i++;
                continue;
            }
            else
            {
                if(v[j]!=bin)
                {
                    for(int a=i;a<=j;a++)
                    {
                        if(v[a]==1)
                        {
                            v[a]=0;
                        }
                        else
                        {
                            v[a]=1;
                        }
                    }
                    count++;
                }
                else if(j!=p)
                {
                    j--;
                    continue;
                }
            }
            
        }
        cout<<count<<"\n";
    }
    return 0;
}