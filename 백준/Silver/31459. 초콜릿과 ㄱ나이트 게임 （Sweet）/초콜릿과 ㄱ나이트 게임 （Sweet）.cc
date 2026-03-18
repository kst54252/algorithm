#include<bits/stdc++.h>
using namespace std;

int n,m,a,b,c,d,cnt;
int arr[101][101];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c >> d;
        cnt=0;
        for(int x=0;x<=100;x++)
            for(int y=0;y<=100;y++)
                arr[x][y]=0;

        for(int x=a;x>=1;x--)
            for(int y=b;y>=1;y--)
                if(arr[x+c][y+d]!=1){
                    arr[x][y]=1;
                    cnt++;
                }
        cout<<cnt<<"\n";
    }
}