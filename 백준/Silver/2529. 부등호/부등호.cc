#include <bits/stdc++.h>
using namespace std;

int n, ch[11];
char a[12],b;
vector<long long> v, ans;
void f(int x){
    if(x == n+1){
        long long nm=0;
        for(int i=0;i<=n;i++){
            nm=nm*10+v[i];
        }
        ans.push_back(nm);
        return;
    }    
    for(int i=0;i<=9;i++){
        if(a[x-1]=='<'&&(v[x-1]<i)&&!ch[i]){
            ch[i]=1;
            v.push_back(i);
            f(x+1);
            v.pop_back();
            ch[i]=0;
        }
        else if(a[x-1]=='>'&&(v[x-1]>i)&&!ch[i]){
            ch[i]=1;
            v.push_back(i);
            f(x+1);
            v.pop_back();
            ch[i]=0;
        }  
        
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<=9;i++){
        ch[i]=1;
        v.push_back(i);
        f(1);
        ch[i]=0;
        v.pop_back();
    }

    cout<<ans[ans.size()-1]<<"\n";
    if(ans[0]<pow(10,n))
        cout<<0;
    cout<<ans[0];
    return 0;
}