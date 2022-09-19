class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int i=nums.size()-1;
        int flag=0;
        sort(nums.begin(),nums.end());
        while(i>=2){
            
            if(nums[i]<nums[i-1]+nums[i-2]){
                flag=1;
                break;
            }
            i--;
        }
        if(flag==1){
            return(nums[i]+nums[i-1]+nums[i-2]);
        }
        else{
            return 0;
        }
    }
};