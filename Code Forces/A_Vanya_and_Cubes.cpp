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
    int sum=0;
    int count=0;
    int check=0;
    if(n==1)
        cout<<1;
    else
    {
        for(int   i=1;check<=n;i++)
        {
            sum+=i;
            count++;
            check+=sum;
        }
        cout<<count-1;
    }
       
    return 0;
}