#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, b;
    double a,x,y;
    for(int i=0;i<20;i++){
        cin >> s >> a >> b;
        x+=a;
        if(b=="P")
            x-=a;
        else if(b=="A+")
            y+=4.5*a;
        else if(b=="A0")
            y+=4*a;
        else if(b=="B+")
            y+=3.5*a;
        else if(b=="B0")
            y+=3*a;
        else if(b=="C+")
            y+=2.5*a;
        else if(b=="C0")
            y+=2*a;
        else if(b=="D+")
            y+=1.5*a;
        else if(b=="D0")
            y+=1*a;   
    }
    
    cout<<(double)y/x;
    return 0;
}