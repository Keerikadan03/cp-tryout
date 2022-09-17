#include <bits/stdc++.h>
using namespace std;
 int main()
 {int n;
 cin>>n;
  int arr[n][n],sum1=0,sum2=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
        cin>>arr[i][j];
  }

 for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
       
        if(i==j)
        {
            sum1+=arr[i][j];
        }
  }  
int j=0;
  for(int i=n-1;i>=0;i--)
  { 
    while(j<n)
    {
    sum2+=arr[i][j];
    break;
    }
    j++;
  }   
  int diff=sum1-sum2;
  cout<<abs(diff);
  return 0;
 }