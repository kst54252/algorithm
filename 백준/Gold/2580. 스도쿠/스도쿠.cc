#include<bits/stdc++.h>
using namespace std;
int a[9][9],xxx;
bool row[10][10], col[10][10], rec[3][3][10];
vector<pair<int,int>> v;
void f(int n){
    if(!xxx){
    if(n == v.size()){
        xxx=1;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
                cout << a[i][j] << " ";
            cout <<"\n";
        }
        return;
    }
    else{
        int x = v[n].first;
        int y = v[n].second;
        for(int i=1;i<=9;i++)
            if(!row[x][i] && !col[y][i] && !rec[x/3][y/3][i]){
                row[x][i]=1;
                col[y][i]=1;
                rec[x/3][y/3][i]=1;
                a[x][y]=i;
                f(n+1);
                row[x][i]=0;
                col[y][i]=0;
                rec[x/3][y/3][i]=0;
                a[x][y]=0;
            }
    }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++){
            cin >> a[i][j];
            if(a[i][j]){
                row[i][a[i][j]] = 1;
                col[j][a[i][j]] = 1;
                rec[i/3][j/3][a[i][j]] = 1;
            }
            else
                v.push_back({i, j});
        }
    f(0);
}