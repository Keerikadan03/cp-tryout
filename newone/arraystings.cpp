#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int m,n;
    cout<<"Enter the size of array :\n";
    char string[m][n],ch;
    int i,j,len,k;
    cout<<"\nEnter m strings : ";
    for(i=0;i<m;i++)
        cin.getline(string[i],n);
    for(i=0;i<m;i++)
        cout<<"\n"<<string[i];
    return 0;
}