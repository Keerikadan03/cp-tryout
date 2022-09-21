#include <bits/stdc++.h>
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int pos=-1;
        int man_sum;
        int sum=INT_MAX;
        for(int i=0;i<points.size();i++){
            
            if(x==points[i][0] || y==points[i][1]){
                man_sum=abs(x-points[i][0])+ abs(y-points[i][1]);
                
                if(man_sum<sum){
                    sum=man_sum;
                    pos=i;
                }
            }
        }
        return pos;
        
    }
};
