#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
    long arr[n];
    long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while (i<n)
    {
    sum+=arr[i];
    i++;
    }
    cout<<sum;
    return 0;
}