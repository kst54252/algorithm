#include <bits/stdc++.h>
using namespace std;
int r,p;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string S, T = "#";
    cin >> S;
    for(char c : S){
        T += c;
        T += '#';
    }
    
    int n = T.size();
    vector<int> A(n, 0);
    long long ans = 0;

    for(int i=0;i<n;i++){
        if(i <= r)
            A[i] = min(A[2 * p - i], r - i);
        else 
            A[i] = 0;
        while(i - A[i] - 1 >= 0 && i + A[i] + 1 < n && T[i - A[i] - 1] == T[i + A[i] + 1])
            A[i]++;        
        if(r < i + A[i]){
            r = i + A[i];
            p = i;
        }
        ans += (A[i] + 1) / 2;
    }
    cout << ans << "\n";
    return 0;
}