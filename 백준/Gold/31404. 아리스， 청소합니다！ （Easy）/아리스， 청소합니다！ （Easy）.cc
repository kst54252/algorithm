#include<bits/stdc++.h>
using namespace std;
int h, w, r, c, d, cc, ans;
int a[65][65], b[65][65], dust[65][65], ch[65][65][4];
int xx[4]={-1,0,1,0},yy[4]={0,1,0,-1};
string s;
void f(int x, int y, int deg){
    
    ans++;
    if(x<0||y<0||x>=h||y>=w)
        return;
    if(ans>cc+20000)
        return;
    if(!dust[x][y]){
        cc=ans;
        dust[x][y]=1;
        deg+=a[x][y];
        deg%=4;
        f(x+xx[deg],y+yy[deg],deg);
    }
    else{
        deg+=b[x][y];
        deg%=4;
        f(x+xx[deg],y+yy[deg],deg);     
    }   
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> h >> w;
    cin >> r >> c >> d;
    for(int i=0;i<h;i++){
        cin >> s;
        for(int j=0;j<w;j++)
            a[i][j]=s[j]-'0';
    }
   for(int i=0;i<h;i++){
        cin >> s;
        for(int j=0;j<w;j++)
            b[i][j]=s[j]-'0';
    }
    f(r,c,d);
    
    cout << cc;
    return 0;
}