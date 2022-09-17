#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> vect;
    int n=vect.size();
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vect.push_back(a);
    }
    for(auto &p :vect)
    {
        cout<<p<<" ";
    }
    return 0;
}