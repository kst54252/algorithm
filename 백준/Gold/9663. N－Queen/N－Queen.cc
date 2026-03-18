#include <bits/stdc++.h>

using namespace std;
int n,ans,a[16];

int ff(int x){
    for(int i=0;i<x;i++)
        if(a[x]==a[i]||x-i==abs(a[x]-a[i]))
            return 0;
    return 1;

}
void f(int x){
    if(x==n){
        ans++;
        return;
    }
    for(int i=0;i<n;i++){
        a[x]=i;
        if(ff(x))
            f(x+1);
    }
}
int main(){
    cin >> n;
    f(0);
    cout<<ans;
    return 0;
}
