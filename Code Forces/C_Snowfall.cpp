#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        vector<int> v,nv,lv;
        int size;
        cin>>size;
        for(int i=0;i<size;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        for(int i=1;i<size;i++)
        { 
           if(v[i]*v[i-1]%6==0)
           {
                nv.push_back(v[i-1]);
                lv.push_back(v[i]);
           }
        }
        for(int i=0;i<size;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }

}