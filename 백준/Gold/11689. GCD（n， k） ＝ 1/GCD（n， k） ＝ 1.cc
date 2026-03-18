#include<bits/stdc++.h>>
using namespace std;
long long n, i = 2, ans = 1;
map<long long, long long> m;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    
    while(i*i <= n){
        if(n % i == 0){
            m[i]++;
            n /= i;
            continue;
        }
        i++;
    }
    m[n]++;
    for(auto it = m.begin(); it != m.end(); it++)
        ans *= pow(it->first,it->second) - pow(it->first,it->second-1);
    cout << ans;
}