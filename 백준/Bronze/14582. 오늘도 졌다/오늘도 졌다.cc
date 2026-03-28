#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a[10],b[10];
    for(int i=0;i<9;i++)
        cin >> a[i];
    for(int i=0;i<9;i++)
        cin >> b[i];
    int aa=0,bb=0,c=0;
    for(int i=0;i<9;i++){
        aa+=a[i];
        if(aa>bb)c=1;
        bb+=b[i];
        
    }
    if(c==1&&aa<bb)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}