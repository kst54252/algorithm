#include<bits/stdc++.h>
using namespace std;
int n,m,cnt,mx,mx_cnt;
char s[1005];
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> s;
        cnt = 0;
        for(int i=0;i<m;i++)
            if(s[i]=='1' && s[i-1]!='1')
                cnt++;
        if(mx < cnt){
            mx = cnt;
            mx_cnt=1;
        }
        else if(mx == cnt)
            mx_cnt++;
    }
    cout << mx <<" "<< mx_cnt;
    return 0;
}