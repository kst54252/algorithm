#include<bits/stdc++.h>
using namespace std;
int n, x, y, max_x=-10000,max_y=-10000,min_x=10000,min_y=10000;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        max_x = max(x,max_x);
        max_y = max(y,max_y);
        min_x = min(x,min_x);
        min_y = min(y,min_y);
    }
    cout << (max_x-min_x)*(max_y-min_y);
    return 0;
}