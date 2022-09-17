#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    int t=0,flag=0;
    while(t<100000)
    {
        if((x1+(v1*t))==(x2+(v2*t)))
        {
            flag=1;
            break;
        }
        t++;
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    if(flag==0)
    {
        cout<<"NO";
    }
    
    return 0;
}