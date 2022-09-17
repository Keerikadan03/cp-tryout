#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {   k=0;
        for(j=0;j<i;j++)
        {
            while(k<=(n-i))
            {
             cout<<" ";
             k++;
            }
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}