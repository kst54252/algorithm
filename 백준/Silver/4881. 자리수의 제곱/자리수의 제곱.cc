#include<bits/stdc++.h>
using namespace std;
int a,b,aa,bb,ans;
vector<int> v1,v2;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(1){
        ans=2100000000;
        v1.clear();v2.clear();
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
        if(a==0&&b==0)
            break;
        aa=a;bb=b;    
        while(1){
            int x=0,xx=0;
            while(aa>0){
                x+=(aa%10)*(aa%10);
                aa/=10;
            }
            for(int i=0;i<v1.size();i++)
                if(v1[i]==x)
                    xx=1;
            if(xx)
                break;        
            v1.push_back(x);
            aa=x;
        }
        while(1){
            int x=0,xx=0;
            while(bb>0){
                x+=(bb%10)*(bb%10);
                bb/=10;
            }
            for(int i=0;i<v2.size();i++)
                if(v2[i]==x)
                    xx=1;
            if(xx)
                break;        
            v2.push_back(x);
            bb=x;
        }        
        for(int i=0;i<v1.size();i++)
            for(int j=0;j<v2.size();j++)
                if(v1[i]==v2[j])
                    ans=min(ans,i+j+2);
        cout<<a<<" "<<b<<" ";            
        if(ans==2100000000)
            cout<<"0\n";
        else
            cout<<ans<<"\n";
            
    }
}