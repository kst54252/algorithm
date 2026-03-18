#include <bits/stdc++.h>
using namespace std;

int n,a[100001],ch[100001],s,ans;
void f(int x){
    if(!ch[x]){
        ch[x]=1;
        ans++;
        if(x-a[x]>=0)
            f(x-a[x]);
        if(x+a[x]<n)
            f(x+a[x]);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> s;
    f(s-1);
    cout<<ans;
    return 0;
}