#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p;
    p={2,"abc"};
    pair<int,string>&p1=p;  //can be used in references like with variables
    p1.first=5;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>arr[3];
    arr[0]={1,2};
    arr[1]={2,3};
    arr[2]={3,4};
    swap(arr[0],arr[2]);
    for(int i=0;i<3;i++){
        cout<<arr[i].second<<" "<<arr[i].first<<endl;
    }

    pair<int,int>g;
    cin>>g.first>>g.second;
    cout<<g.first+g.second;
    return 0;
}