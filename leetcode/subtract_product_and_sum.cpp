class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1,sum=0,digit;
        while(n>0){
            digit=n%10;
            n=n/10;
            product=product*digit;
            sum+=digit;
        }
        return (product-sum);
    }
};