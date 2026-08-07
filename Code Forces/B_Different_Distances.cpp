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
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int arr[a*4]={0};
        int i=0,k=0,j=0;
        while(i<a)
        {
            
            while(arr[k]!=0)
            {
                k++;
            }
            j=i-1;
            while(k<=4*a)
            {
                arr[k]=i;
                k=k+(++j);
            }
            i++;
        }
        i=0;
        while(i<4*a)
        {
            if(arr[i]==0)
            {
                arr[i]=a;
            }
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}