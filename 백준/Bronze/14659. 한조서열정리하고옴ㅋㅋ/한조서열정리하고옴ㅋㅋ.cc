#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, arr[30001], ans=0, j;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++){
        for(j=i+1;j<n;j++)
            if(arr[j]>arr[i])
                break;
        ans=max(ans,j-i-1);
        }
    cout<<ans;             
}