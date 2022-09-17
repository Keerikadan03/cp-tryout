#include <bits/stdc++.h>
using namespace std;
int main(){
    int pos=0,end,begin,water=0;
    int a[12]=[0,1,0,2,1,0,1,3,2,1,2,1];

    for(int i=1;i<12;i++){
        if(a[i]>a[i-1]){
            pos=i;
        }
    }

    for(int i =1;i<12;i++){
        if(a[i]<a[i-1]){
            begin=i-1;
            break;
        }
    }

    for(int i =11;i>=0;i--){
        if(a[i]>a[i-1]){
            end=i;
            break;
        }
    }

    int i= begin;
    while(i<pos){
        for(int j=i+1;j<=pos;j++){
            int height=0;

            if(a[j]>a[i] && (j-i)>1){
                water+=a[i]*(j-i-1)-height;
                i=j;
                break;
            }

            if(a[j]!=0){
                height+=a[j];
            }
        }
    }
    int x=end;
    while(x>pos){
        for(int j=x-1;j>=pos;j--){
            int height=0;

            if(a[j]<a[x] && (x-j)>1){
                water+=a[x]*(x-j-1)-height;
                x=j;
                break;
            }

            if(a[j]!=0){
                height+=a[j];
            }
        }
    }

    return water;

    return 0;
}