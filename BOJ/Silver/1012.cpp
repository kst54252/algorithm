#include <bits/stdc++.h>

using namespace std;
int t,n,m,k,x,y,cnt;
int a[52][52],xx[4]={0,0,1,-1},yy[4]={1,-1,0,0};

void f(int x, int y){
    for(int i=0;i<4;i++)
        if(a[x+xx[i]][y+yy[i]]){
            a[x+xx[i]][y+yy[i]]=0;
            f(x+xx[i],y+yy[i]);
    }
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie (0);
    //freopen("input.txt","r",stdin);
    cin >> t;
    for(int i=0;i<t;i++){
        cnt=0;

        cin >> n >> m >> k;

        for(int j=0;j<k;j++){
            cin >> x >> y;
            a[x+1][y+1]=1;
        }

        for(int j=1;j<=50;j++)
            for(int p=1;p<=50;p++)
                if(a[j][p]){
                    f(j,p);
                    cnt++;
                }

        cout<<cnt<<"\n";
        for(int j=0;j<=50;j++)
            for(int p=0;p<=50;p++)
                a[j][p]=0;
    }
    return 0;
}
