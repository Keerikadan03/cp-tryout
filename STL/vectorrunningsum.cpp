/* #include <bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int sum=0;
        int runningSum[n];
        
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            runningSum[i]=num;
            sum+=runningSum[i];
            runningSum[i]=sum;
        }

        for(int i=0;i<n;i++){
            cout<<runningSum[i]<<" ";
        }
}
*/

/*
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
            runningSum[i]=runningSum[i]+sum;
            sum+=runningSum[i];
        }   
        cout<<runningSum;
    return 0;    
}
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        #include <bits/stdc++.h>
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            nums[i] = sum;
        }   
    return nums;    

        
    }
};

