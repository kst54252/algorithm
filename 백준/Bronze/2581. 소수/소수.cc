#include<bits/stdc++.h>
using namespace std;
int n, m,sum,a[10001]={1,1,},ans = -1;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=2;i<5000;i++)
        if(a[i]==0)
        for(int j=i*2;j<=10000;j+=i)
            a[j]=1;

    for(int i=m;i>=n;i--)
        if(!a[i]){
            sum += i;
            ans = i;
     }
    if(sum!=0)
        cout<<sum<<"\n";
    cout<<ans;
    return 0;
}