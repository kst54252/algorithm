#include <bits/stdc++.h>

using namespace std;
int k,n,ans,mx,cnt,a[10001];
long long m,R,L;
int main()
{
 //   freopen("input.txt","r",stdin);
    cin >> k >> n;
    for(int i=0;i<k;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    R=1;
    L=mx;
    while(R<=L){
        m=(R+L)/2;
        cnt=0;
        for(int i=0;i<k;i++)
            cnt+=a[i]/m;
        if(cnt>=n){
            R=m+1;
            if(ans<m)
                ans=m;
        }
        else
            L=m-1;

    }
    cout<<ans;

    return 0;
}
