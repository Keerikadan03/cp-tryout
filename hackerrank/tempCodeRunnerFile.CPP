#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
 
    int a=x1+v1;
    int b=x2+v2;
    int ans;
    int bigger,smaller;
    if(a>b){
        bigger=a;
        smaller=b;
    }else{
        bigger=b;
        smaller=a;
    }
    if(bigger%smaller==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}