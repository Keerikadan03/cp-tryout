#include<bits/stdc++.h>
using namespace std;
int main()
{   
int m,n;    
cout<<"please enter the size of array : ";
cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int k=0; k<(m+n-1);k++)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {   
                while (i+j==k)
                {
                    if(k%2==0)
                     { cout<<arr[i][j]<<" ";
                     }
                    else    
                        {cout<<arr[j][i]<<" ";
                        }
                    break;
                }
                
            }
        }
    }
    return 0;
}