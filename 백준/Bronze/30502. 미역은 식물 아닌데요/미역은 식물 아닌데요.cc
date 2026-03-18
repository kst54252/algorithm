#include<bits/stdc++.h>
using namespace std;
int n, m, a, c,P[1001],M[1001],mn,mx;
char b;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i=0;i<m;i++){
        cin >> a >> b >> c;
        if(b=='P'){
            if(c)
                P[a] = 1;
            else
                P[a] = -1;
        }
        else{
            if(c)
                M[a] = 1;
            else
                M[a] = -1;
        }
    }
    for(int i=1;i<=n;i++){
        if(P[i] == 1 && M[i] == -1)
            mn++;
        if(P[i] == 1 && M[i] != 1 || P[i] != -1 && M[i] == -1)
            mx++;
        else if(P[i]==0&&M[i]==0)
            mx++;
    }
    cout<< mn<<" "<<mx;
}
