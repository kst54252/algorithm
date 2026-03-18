#include<bits/stdc++.h>
using namespace std;
int x,ans=0,a,b,c,d,e;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >>a>>b>>c>>d>>e;
    ans=e+d;
    a-=d;
    
    while(c){
        if(b>0)
            b--;
        else if(a>0)
            a-=2;    
            
        c--;
        ans++;
    }
    while(b){
        if(b>1){
            b--;
            if(a>0)
                a--;
        }
        else if(a>0)
            a-=3;   
        b--;
        ans++;
    }
    if(a>0){
        if(a%5>0)
            ans++;    
        ans+=(a/5);
    }
    cout<<ans;    
}