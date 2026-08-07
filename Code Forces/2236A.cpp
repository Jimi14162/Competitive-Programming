#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int size,max1,min1;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
        {
            cin>>arr[j];
        }
        max1=min1=arr[0];
        for(int j=1;j<size;j++)
        {
            max1=max(max1,arr[j]);
            min1=min(min1,arr[j]);
        }
        v.push_back(max1+1-min1);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;
}