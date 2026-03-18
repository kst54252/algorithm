#include<bits/stdc++.h>
using namespace std;
int n,l,r=1,ans,cnt;
int arr[200001], fruit[200001][10];
long long sum;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
        for(int j=0;j<10;j++)
            fruit[i][j]=fruit[i-1][j];
        fruit[i][arr[i]]++;
    }
    while(r<=n){
        cnt=0;
        for(int i=0;i<10;i++)
            if(fruit[r][i]-fruit[l][i]>0)
                cnt++;
        if(cnt<=2){
            ans = max(ans,r-l);
            r++;
        }
        else
            l++;
        
    }

    cout << ans;
    return 0;
}
