#include<bits/stdc++.h>
using namespace std;
int n, k, ans=0, aaa=21000000, arr[51][2];
void f(int a, int b, int c){
    ans=0;
    for(int i=0;i<n;i++)
        ans = max(ans,min(min(abs(arr[i][0]-arr[a][0])+abs(arr[i][1]-arr[a][1]),abs(arr[i][0]-arr[b][0])+abs(arr[i][1]-arr[b][1])),abs(arr[i][0]-arr[c][0])+abs(arr[i][1]-arr[c][1])));
    
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin >> arr[i][0] >> arr[i][1];
    if(k==1)
        for(int i=0;i<n;i++){
            f(i,i,i);
            aaa=min(aaa,ans);
            }
    else if(k==2)
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                f(i,j,j);
                aaa=min(ans,aaa);
                }
    else
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                for(int l=j+1;l<n;l++){
                    f(i,j,l);          
                    aaa=min(ans,aaa);
                    } 
    cout<<aaa;             
}
