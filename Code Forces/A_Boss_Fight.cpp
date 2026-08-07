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
        int freq[1001]={0};
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            sum+=temp;
            freq[temp]++;
        }
        int mx=0,val=0;
        for(int i=1;i<=1000;i++)
        {
            if(freq[i] > mx)
            {
                mx=freq[i];
                val=i;
            }
        }
        int oth=n-mx;
        if(mx<=oth+1)
        {
            cout<<sum<<"\n";
        }
        else
        {
            ll int othsum=sum - (mx*val);
            cout<<othsum+(oth+2)*val<<"\n";
        }
        
    }   
    return 0;
}