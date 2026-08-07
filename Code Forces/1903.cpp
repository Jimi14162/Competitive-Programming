#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int a;
    cin>>a;
    
    while(a--)
    {
        vector <int> v;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            
            int b;
            cin>>b;
            v.push_back(b);
        }
        if(n==1 || is_sorted(v.begin(),v.end()) || k>=2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;        
}
    