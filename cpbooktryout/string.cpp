#include<bits/stdc++.h>
using namespace std;
int main()
{
    string time;
    getline(cin,time);
    string sub=time.substr(0,1);
    string meridian=time.substr(8,9);
    stringstream pos(sub);
    int x;
    pos>>x;
    if(x==12)
    {
        if(meridian=="AM")
        {
            
        }
    }

    return 0;
}