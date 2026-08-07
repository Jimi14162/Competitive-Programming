#include<iostream>
using namespace std;
int main()
{
    int n,check=0;
    cin>>n;
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0;i<14;i++)
    {
        if(n%arr[i]==0)
        {
            cout<<"YES";
            check=1;
            break;
        }
    }
    if(!check)
    {
        while(n)
        {
            if(n%10==4 || n%10==7)
            {
                check=1;
            }
            else
            {
                check=0;
                break;
            }
            n/=10;
        }
        if(check)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }

    return 0;
}