#include<bits/stdc++.h>
using namespace std;
int n, m, a, b;
bool sw[110];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> sw[i];
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        if(a==1)
            for(int i=b;i<=n;i+=b)
                sw[i]=abs(sw[i]-1);
        else{
            sw[b]=abs(sw[b]-1);
            for(int i=1;i<=n/2;i++){
                if(b-i<1||b+i>n||sw[b-i]!=sw[b+i])
                    break;
                else{
                    sw[b-i]=abs(sw[b-i]-1);
                    sw[b+i]=abs(sw[b+i]-1);    
                }
            }    
        }
    }    
    for(int i=1;i<=n;i++){
        cout << sw[i] <<" ";
        if(i%20 == 0)
            cout << "\n";
            }
        
    return 0;
}
    