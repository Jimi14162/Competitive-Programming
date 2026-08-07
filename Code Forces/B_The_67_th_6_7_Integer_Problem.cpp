#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        vector <int> v;
        for(int i=0;i<7;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            v[6]-=v[i];
        }
        cout<<v[6]<<"\n";
    }
}