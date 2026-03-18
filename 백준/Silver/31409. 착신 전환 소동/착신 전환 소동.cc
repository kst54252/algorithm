#include<bits/stdc++.h>
using namespace std;
int n, m, a[100000], ans=0;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==i)
            ans++;
    }
    cout<<ans<<"\n";        
    for(int i=1;i<=n;i++){
        if(a[i]!=i)
            cout << a[i] <<" ";
        else{
            if(i==n)
                cout << "1 ";
            else    
                cout << n <<" ";                
        }
    }
    return 0;
}
    