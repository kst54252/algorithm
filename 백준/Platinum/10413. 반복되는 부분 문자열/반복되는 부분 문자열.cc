#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> s;
        int n = s.size();
        vector<int> suffix(n), group(n+1), next_group(n + 1);
        for(int i=0;i<n;i++){
            suffix[i] = i;
            group[i] = s[i];
        }
        group[n] = -1;
        for(int d=1;d<n;d*=2){

            auto cmp = [&](int i, int j) {
                if (group[i] != group[j])
                    return group[i] < group[j];

                int left = i + d < n ? group[i + d] : -1;
                int right = j + d < n ? group[j + d] : -1;
                return left < right;
            };

            sort(suffix.begin(), suffix.end(), cmp);

            next_group[suffix[0]] = 0;
            next_group[n] = -1;
            for (int i=1;i<n;i++)
                next_group[suffix[i]] = next_group[suffix[i - 1]] + cmp(suffix[i - 1], suffix[i]);
            
            group = next_group;

            if (group[suffix[n - 1]] == n - 1)
                break;
        }
        vector<int> rank_arr(n);
        vector<int> lcp(n);
        for (int i=0;i<n;i++)
            rank_arr[suffix[i]] = i;

        for (int i=0,len=0;i<n;i++){
            int k = rank_arr[i];
            if(k == 0){
                len = 0;
                continue;
            }
            int j = suffix[k - 1]; 
            while(i + len < n && j + len < n && s[i + len] == s[j + len])
                len++;

            lcp[k] = len;

            if(len > 0)
                len--; 
        }
        long long ans = 0;
        for(int i=1;i<n;i++)
            if(lcp[i] > lcp[i - 1])
                ans += lcp[i] - lcp[i - 1];
        cout << ans << "\n";
    }
    return 0;
}
