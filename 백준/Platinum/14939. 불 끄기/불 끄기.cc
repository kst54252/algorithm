#include <bits/stdc++.h>
using namespace std;
int a[11], b[11], c, cnt, ans=(1<<10);
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    for(int i=0;i<10;i++){
        cin >> s;
        for(int j=0;j<10;j++)
            if(s[j]=='O')
                a[i]+=(1<<j);
    }            
        
    for(int i=0;i<1024;i++){
        cnt=0;
        c=0;
        for(int j=0;j<10;j++)
            b[j]=a[j];
        for(int j=0;j<10;j++)
            if(i&(1<<j)){
                if(j>0)
                    b[0]=b[0]^(1<<(j-1));
                b[0]=b[0]^(1<<j);
                b[0]=b[0]^(1<<(j+1));
                b[1]=b[1]^(1<<j);
                cnt++;
                }
        
        for(int j=1;j<10;j++)
            for(int k=0;k<10;k++)
                if(b[j-1]&(1<<k)){
                    if(k>0)
                        b[j]=b[j]^(1<<(k-1));
                    b[j]=b[j]^(1<<k);
                    b[j]=b[j]^(1<<(k+1));
                    b[j-1]=b[j-1]^(1<<k);
                    b[j+1]=b[j+1]^(1<<k);
                    cnt++;
                }

        if(!(b[9]&((1<<10)-1)))        
            ans=min(ans,cnt);
    }
    if(ans==(1<<10))
        cout<<"-1";
    else
        cout << ans;    
    return 0;
}