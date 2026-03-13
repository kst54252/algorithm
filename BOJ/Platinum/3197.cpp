#include <bits/stdc++.h>
using namespace std;

int n, m, xxx, yyy, available;
int a[1557][1557], ch[1557][1557], xx[4]={0,0,1,-1}, yy[4]={1,-1,0,0};
string s;
void f(int t){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int k=0;k<4;k++)
                if(!a[i][j])
                    if(a[i+xx[k]][j+yy[k]] > 0 && a[i+xx[k]][j+yy[k]] <= t)
                        a[i][j] = t+1;
}
void f1(int x, int y, int t){
    cout<<x<<" "<<y<<" "<<t<<"\n";
    for(int k=0;k<4;k++){
        if(a[x+xx[k]][y+yy[k]] == 2100000000)
            available=1;
        else if(!ch[x+xx[k]][y+yy[k]])
            if(x+xx[k] > 0 && x+xx[k] <=n && y+yy[k] > 0 && y+yy[k] <= m)
                if(a[x+xx[k]][y+yy[k]] > 0 && a[x+xx[k]][y+yy[k]] <= t+1){
                    ch[x+xx[k]][y+yy[k]] = 1;
                    f1(x+xx[k], y+yy[k], t);
                    ch[x+xx[k]][y+yy[k]] = 0;
                }
        }
}
int main(){
    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<m;j++){
            if(s[j]=='.')
                a[i+1][j+1]=1; 
            if(s[j]=='L'){
                a[i+1][j+1]=2100000000;
                xxx = i+1;
                yyy = j+1;
            }
        }
    }

    a[xxx][yyy]--;
    ch[xxx][yyy]=1;
     
    f1(xxx, yyy, 0);
    if(available){
        cout<<"0";
        return 0;
    }
   
    for(int i=1;i<3;i++){
        f(i);
        f1(xxx, yyy, i);
        if(available){
            cout << i;
            return 0;
        }
    }

    return 0;
}
