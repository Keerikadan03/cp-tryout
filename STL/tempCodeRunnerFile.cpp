#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int>runningSum[n];
        int sum=0;
        
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            runningSum->push_back(num);
            int a=runningSum[i];
            a+=sum;
            sum+=a;
            cout<<runningSum;
        }   
    return 0; 