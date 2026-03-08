#include<bits/stdc++.h>
using namespace std;
int n, sum, d[502][502];
pair<int,int> a[502], d_m[502][502];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i].first >> a[i].second;
        d_m[i][i] = a[i];
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j+i<=n;j++){
            int k = j + i;
            d[j][k] = INT_MAX;
            for(int m=j;m<k;m++){
                sum = d_m[j][m].first*d_m[j][m].second*d_m[m+1][k].second;
                d[j][k] = min(d[j][k], d[j][m]+d[m+1][k]+sum);
            }
            d_m[j][k]={a[j].first,a[k].second};
        }
    cout << d[1][n];
    
}
/*
5 3 2 6
*/ 