#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double neg=0,pos=0,zero=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        neg+=1;
        
        if(arr[i]>0)
        pos+=1;
        
        if(arr[i]==0)
        zero+=1;
        
    }
    cout<<pos/n<<"\n"<<neg/n<<"\n"<<zero/n;
    return 0;
}