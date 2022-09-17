#include<bits/stdc++.h>
using namespace std;
int main()
{
  int rows,columns;
  cout<<"Number of rows : ";
  cin>>rows;
  int arr[rows];
  cout<<"Number of columns in rows : ";
  for(int i=0;i<rows;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<columns;j++)
    {
      cout<<arr[i]<<" ";
    }
  }
  return 0;
}