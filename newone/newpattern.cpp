#include<bits/stdc++.h>
using namespace std;
int main()
    {
     int n,i,j=0;
     cin>>n;
     for(i=0;i<n;i++)
     {  int k=0;
        for(k=0;k<n-i;k++)
        {   j=0;
            while(j<=i)
            {
            cout<<" ";
            break;
            }
            cout<<"*";
            j++;
        }
        cout<<endl;
     }

        return 0;
    }