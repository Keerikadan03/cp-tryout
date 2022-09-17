class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index=1,sum;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            sum=nums[index]+nums[index-1];
            if(sum==target){
                ans.push_back(index);
                ans.push_back(index-1);
                return ans;
            }
        }
    }
};