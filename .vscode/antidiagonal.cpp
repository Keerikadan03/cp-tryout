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
  int j=0;
  for(int i=n-1;i>=0;i--)     //2
  { 
    while(j<n)
    {
    sum2+=arr[i][j];
    break;
    }
    j++;
  }  
  cout<<sum2;
  return 0;
 }