#include<bits/stdc++.h>
using namespace std;
string s;
int n,a[5010][5010],ans=1;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<=i;j++)
            a[i][j]=s[j];
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[i][j]=='R')
                if(a[i][j]==a[i+1][j]&&a[i+1][j]==a[i+1][j+1]){
                    a[i][j]=0;
                    a[i+1][j]=0;
                    a[i+1][j+1]=0;
                }
            if(a[i][j]=='B')
                if(a[i][j]==a[i][j+1]&&a[i][j+1]==a[i+1][j+1]){
                    a[i][j]=0;
                    a[i][j+1]=0;
                    a[i+1][j+1]=0;
                }
            }
    
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++)
            if(a[i][j])
                ans=0;
    cout << ans;

}