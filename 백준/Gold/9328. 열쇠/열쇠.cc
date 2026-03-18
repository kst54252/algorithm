#include<bits/stdc++.h>
using namespace std;
int h, w, ret;
int a[103][103], ch[103][103];
int keys[31], xx[4]={0,0,1,-1}, yy[4]={1,-1,0,0};
string s;
queue<pair<int,int>> q;
void start(){
    for(int j=0;j<w;j++){
        if(a[1][j+1]!='*')
            q.push({1,j+1});
        if(a[h][j+1]!='*')
            q.push({h,j+1});
    }
    for(int j=0;j<h;j++){
        if(a[j+1][1]!='*')
            q.push({j+1,1});
        if(a[j+1][w]!='*')
            q.push({j+1,w});
    }
}
void search(int x, int y){
    int nx,ny;
    for(int i=0;i<4;i++){
        nx = x + xx[i];
        ny = y + yy[i];
        if(nx>=1&&ny>=1&&nx<=h&&ny<=w)
            if(a[nx][ny]!='*'&&a[nx][ny]!=0&&!ch[nx][ny]){
                q.push({nx,ny});
                ch[nx][ny]=1;
            }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, x, y, ans=0;
    cin >> n;
    for(int i=0;i<n;i++){

        for(int j=0;j<30;j++)
            keys[j]=0;
        ret=0;
        cin >> h >> w;
        for(int j=0;j<h;j++){
            cin >> s;
            for(int k=0;k<s.size();k++)
                a[j+1][k+1] = s[k];
        }
        cin >> s;
        if(s != "0")
            for(int j=0;j<s.size();j++)
                keys[s[j]-'a'] = 1;
        while(!ret){
            start();
            ret = 1;
            for(int j=1;j<=h;j++)
                for(int k=1;k<=w;k++)
                    ch[j][k]=0;
  
            while(!q.empty()){
               
                x = q.front().first;
                y = q.front().second;
                //cout<<x<<" "<<y<<"\n";
                ch[x][y] = 1;
                if(a[x][y]>='A' && a[x][y]<='Z'){
                    if(keys[a[x][y]-'A']){
                        a[x][y] = '.';
                        search(x, y);
                        ret = 0;
                    }
                }
                else if(a[x][y]>='a' && a[x][y]<='z'){
                    keys[a[x][y]-'a'] = 1;
                    a[x][y] = '.';
                    ret = 0;
                    search(x, y);
                }
                else if(a[x][y]=='$'){
                    a[x][y]='.';
                    ans++; 
                    search(x, y);
                }
                else if(a[x][y]=='.'){
                    search(x,y);
                }
                q.pop();
            }
        }
        cout << ans << "\n";
        ans = 0;
    }


}