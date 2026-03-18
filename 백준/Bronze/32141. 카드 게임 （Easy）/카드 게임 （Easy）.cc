#include <bits/stdc++.h>
#define INF 2100000000
typedef long long ll;
using namespace std;
int n, h, a;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> h;
    for(int i=0;i<n;i++){
        cin >> a;
        h-=a;
        if(h<=0){
            cout << i+1;
            return 0;
        }
    }
    cout <<"-1";
    
    return 0;
}