#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector<int>v;
    //int n;
    //cin>>n;
    //for(int i=0;i<n;++i){
    //    int x;
    //    cin>>x;
    //    v.push_back(x);
    //    printVec(v);
    //}
    //vector<int>v(10,3); //initialises a vector of size 10 and makes all the values in the vector 3
    //v.push_back(7);//in the last place vlause 7 is added
    vector<int>v;
    v.push_back(7);
    v.push_back(6);
    vector<int>v2=v;
    v2.push_back(5);
    printVec(v);
    printVec(v2);



    return 0;
}