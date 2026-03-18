#include <bits/stdc++.h>
using namespace std;
int a[5][5], b[5][5], mn=2100000000, sum, ans;
vector<string> v = {"Inseo", "Junsuk", "Jungwoo", "Jinwoo", "Youngki"};

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin >> a[i][j];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin >> b[i][j];
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=0;j<5;j++)
            for(int k=0;k<5;k++)
                sum+=a[i][j]*b[j][k];
        if(mn>=sum){
            ans=i;
            mn=sum;
        }
    }
    cout << v[ans];
    return 0;
}