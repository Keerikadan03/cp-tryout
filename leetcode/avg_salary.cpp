class Solution {
public:
    double average(vector<int>& salary) {
        int mx=0,mn=salary[0],n=salary.size()-2;
        double sum=0;
        for(int i :salary){
            sum+=i;
            mx=max(i,mx);
            mn=min(i,mn);
        }
        sum=sum-mx-mn;
        return sum/n;
    }
};