class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int diff=arr[1]-arr[0];
        auto flag=true;
        int i=2;
        while(flag and i<arr.size()){
            if(arr[i]-arr[i-1]==diff){
                flag=true;
            }
            else{
                flag=false;
            }
            i++;
            
        }
        return flag;
      
    }
};
