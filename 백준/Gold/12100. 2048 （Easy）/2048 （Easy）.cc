#include<bits/stdc++.h>
using namespace std;
int n,mx=0,a[20][20];
void f(int a[20][20], int cnt){
    int b[4][20][20], x, xx;
    memset(b,0,sizeof(b));
    if(cnt == 5){
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mx = max(mx, a[i][j]);
        /*for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }*/
    }
    else{
        //left
        for(int i=0;i<n;i++){
            x=0;xx=0;
            for(int j=0;j<n;j++)
                if(a[i][j]){
                    if(x && b[0][i][x-1] == a[i][j] && a[i][xx] == a[i][j])
                        b[0][i][x-1] *= 2;
                    else{
                        b[0][i][x]=a[i][j];
                        x++;    
                    }
                    xx = j;
                }
        }
        
        //right
        for(int i=0;i<n;i++){
            x=n-1;xx=n-1;
            for(int j=n-1;j>=0;j--)
                if(a[i][j]){
                    if(x!=n-1 && b[1][i][x+1] == a[i][j] && a[i][xx] == a[i][j])
                        b[1][i][x+1] *= 2;
                    else{
                        b[1][i][x]=a[i][j];
                        x--;    
                    }
                    xx = j;
                }
        }
        
        //up
        for(int i=0;i<n;i++){
            x=0;xx=0;
            for(int j=0;j<n;j++)
                if(a[j][i]){
                    if(x && b[2][x-1][i] == a[j][i] && a[xx][i] == a[j][i])
                        b[2][x-1][i] *= 2;
                    else{
                        b[2][x][i]=a[j][i];
                        x++;    
                    }
                    xx = j;
                }
        }
        
        //down
        for(int i=0;i<n;i++){
            x=n-1;xx=n-1;
            for(int j=n-1;j>=0;j--)
                if(a[j][i]){
                    if(x!=n-1 && b[3][x+1][i] == a[j][i] && a[xx][i] == a[j][i])
                        b[3][x+1][i] *= 2;
                    else{
                        b[3][x][i]=a[j][i];
                        x--;    
                    }
                    xx = j;
                }
        }
        
        for(int i=0;i<4;i++)
            f(b[i],cnt+1);
    
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    f(a, 0);
    cout << mx;
    return 0;
}