#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0; i<m;i++)
	{
        for(int j=0;j<n;j++)
	{
		cin>>arr[i][j];
	}
    }
	int k=0,lines;
	if(m<=n)
	{
		lines=2*m-1;
	}
	else
	{
		lines=2*n;
	}
	while(k<lines/4)
	{
		for(int i=0;i<m-k;i++)
		{
			for(int j=0;j<n-k;j++)
			{
				
				while(k%4==0)
				{
					cout<<arr[i-k][j];
					break;
				}
				
			}
			for(int j=0;j<n-k;j++)
			{
				while(k%4==1)
				{
					cout<<arr[j][n-k];
				}
			}
			for(int j=0;j<n-k;j++)
			{
				while(k%4==2)
				{
					cout<<arr[j][m-k];
				}
			}
			for(int j=0;j<n-k;j++)
			{
				while(k%4==3)
				{
					k++;
					cout<<arr[j][i+k];
					break;
				}
			}
		}
		
		
	}
	return 0;
}