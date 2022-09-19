class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one=0;
        for(int i=32;i>=0;i--){
            if(n&1==1){
                one+=1;
            }
            n=n>>1;
        }
        return one;
    }
};