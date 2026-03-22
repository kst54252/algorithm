#include<bits/stdc++.h>
using namespace std;
int arr[2200][2200], cnt[3];
void solve(int x, int y, int s){
    int first = arr[x][y];
    bool is_same = 1;

    for(int i = x; i < x + s; i++){
        for(int j = y; j < y + s; j++){
            if(arr[i][j] != first){
                is_same = 0;
                break;
            }
        }
        if(!is_same)
            break;
    }

    if(is_same){
        cnt[first+1]++;
        return;
    }

    solve(x, y, s / 3);
    solve(x, y + s / 3, s / 3);
    solve(x, y + s * 2 / 3, s / 3);
    solve(x + s / 3, y, s / 3);
    solve(x + s / 3, y + s / 3, s / 3);
    solve(x + s / 3, y + s * 2 / 3, s / 3);
    solve(x + s * 2 / 3, y, s / 3);
    solve(x + s * 2 / 3, y + s / 3, s / 3);
    solve(x + s * 2 / 3, y + s * 2 / 3, s / 3);
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];

    solve(0, 0, n);
    
    cout << cnt[0] << "\n" << cnt[1] << "\n" << cnt[2];
    return 0;
}