#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    string s;
    cin >> s;
    int n = s.size();

    vector<int> pi(n, 0);
    for (int i=1, j=0;i<n;i++){
        while(j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if(s[i] == s[j])
            pi[i] = ++j;
    }

    vector<int> cnt(n + 1, 1); 
    
    for(int i=n-1;i>=0;i--)
        cnt[pi[i]] += cnt[i + 1]; 

    vector<int> len;
    int l = n;
    while(l > 0){
        len.push_back(l);
        l = pi[l - 1];
    }

    reverse(len.begin(), len.end());

    cout << len.size() << "\n";
    for (auto len : len)
        cout << len << " " << cnt[len] << "\n";
    return 0;
}