#include<bits/stdc++.h>
using namespace std;
int n,a[11],b[4],mn=INT_MAX,mx=INT_MIN,x;
void f(int cnt){
    if(cnt == n-1){
        mn = min(mn, x);
        mx = max(mx, x);
        return;
    }
    if(b[0]){
        b[0]--;
        x+=a[cnt+1];
        f(cnt+1);
        b[0]++;
        x-=a[cnt+1];
    }
    if(b[1]){
        b[1]--;
        x-=a[cnt+1];
        f(cnt+1);
        b[1]++;
        x+=a[cnt+1];
    }
    if(b[2]){
        b[2]--;
        x*=a[cnt+1];
        f(cnt+1);
        b[2]++;
        x/=a[cnt+1];
    }
    if(b[3]){
        b[3]--;
        int xx=x;
        x/=a[cnt+1];
        f(cnt+1);
        b[3]++;
        x=xx;
    }
}
int main(){
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    x = a[0];
    f(0);
    cout << mx <<"\n"<< mn;
}

