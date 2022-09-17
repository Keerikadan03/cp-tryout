#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string meridian=s.substr(8,9);
    string number=s.substr(0,2);
    string final;
    if(meridian=="AM")
    {
        if(number=="12")
        {
            cout<<"00"<<s.substr(2,6);
        }
        else
        {
            cout<<s.substr(0,8);
        }
    }
    else if(meridian=="PM")
    {
        if(number=="12")
        {
            cout<<s.substr(0,8);
        }
        else{
            cout<<stoi(number)+12<<s.substr(2,6);
        }
    }

    return 0;
}