#include <bits/stdc++.h>
using namespace std;
int n, k, cur, cnt[101], a[101], c[101], ch[101];
char cc;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;;
    for(int i=0;i<k;i++){
        cin >> cnt[i] >> cc;
        c[i] = cc;
    }

    a[0] = c[k-1];
    ch[c[k-1]]=1;
    for(int i=k-2;i>=0;i--){
            cur = (cur + cnt[i+1]) % n;
            if(a[cur] != c[i]){
                if(!a[cur]){
                    if(ch[c[i]]){
                        cout << "!";
                        return 0;
                    }
                    a[cur] = c[i];
                    ch[c[i]]=1;
                }
                else{
                    cout << "!";
                    return 0;
                }
            }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0)
            cout << (char)a[i];

        else
            cout << "?";

    }
    return 0;
}