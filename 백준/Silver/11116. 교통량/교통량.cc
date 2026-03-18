#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        int m, cnt=0;
        cin >> m;
        
        vector<int> left(m);
        unordered_set<int> right;
        
        for(int j=0;j<m;j++)
            cin >> left[j];
        
        for(int j=0;j<m;j++){
            int val;
            cin >> val;
            right.insert(val);
        }
        for(int x : left)
            if(right.count(x + 1000))
                cnt++;
                
        cout << cnt / 2 << "\n";
    }
    


    return 0;
}