#include <bits/stdc++.h>
using namespace std;
int main()
{
    long i,arr[5],sum=0;
    for(i=0;i<5;i++)
    {    cin>>arr[i];
    }
    int min=arr[0],max=arr[0];
    for(i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<(sum-max)<<" "<<(sum-min);
    return 0;

}