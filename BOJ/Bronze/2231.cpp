#include <bits/stdc++.h>

using namespace std;
int n,cnt,a;
int main()
{
    cin >> n;
    for(int i=1;i<n;i++){
        cnt=0;
        a=i;
        while(a>0){
            cnt+=a%10;
            a/=10;
        }
        if(cnt+i==n){
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
