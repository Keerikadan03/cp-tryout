#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,n;
  cin>>n;
  for(i=0;i<n;i++)
  { k=0;
    for(j=i;j<n-1;j++)
    {
      cout<<" ";
    }
    while(k!=(2*i)+1)
    { cout<<"*";
      k++;
    }
    cout<<endl;
  }

  return 0;
}