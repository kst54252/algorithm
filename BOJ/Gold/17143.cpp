#include<bits/stdc++.h>
using namespace std;
int r,c,m,x,y,s,d,z,ans;
int xx[5] = {0,-1,1,0,0}, yy[5] = {0,0,0,1,-1};
struct shark{
    int r,c,s,d,z;
};
vector<shark> v;
void get(int x){
    int mn = INT_MAX, xx;
    for(int i=0;i<v.size();i++)
        if(v[i].c == x)
            if(mn > v[i].r){
                mn = v[i].r;
                xx=i;
            }
    if(mn != INT_MAX){
        ans += v[xx].z;
        v.erase(v.begin()+xx);
    }
    //cout<<ans<<"\n";
}
void move(){
    for(int i=0;i<v.size();i++){
        v[i].r += v[i].s*xx[v[i].d];
        v[i].c += v[i].s*yy[v[i].d];
        if(v[i].r < 1){
            if(!(((v[i].r*(-1))/r)%2)){
                v[i].r = (v[i].r*(-1))%r;
                v[i].d = 2;
            }
            else v[i].r = r - (v[i].r*(-1))%r;
        }
        else if(v[i].r > r){
            if(((v[i].r-r)/r)%2)
                v[i].r = (v[i].r-r)%r;

            else{
                v[i].r = r - (v[i].r-r)%r;
                v[i].d = 1;
            }
        }
        else if(v[i].c < 1){
            if(!(((v[i].c*(-1))/c)%2)){
                v[i].c = (v[i].c*(-1))%c;
                v[i].d = 3;
            }
            else v[i].c = c - (v[i].c*(-1))%c;
        }
        else if(v[i].c > c){
            if(((v[i].c-c)/c)%2){
                v[i].c = (v[i].c-c)%c;
                v[i].d=4;
            }
            else{
                v[i].c = c - (v[i].c-c)%c;
                v[i].d = 4;
            }
        }
    }

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> r >> c >>  m;
    for(int i=0;i<m;i++){
        cin >> x >> y >> s >> d >> z;
        v.push_back({x,y,s,d,z});
    }
    
    for(int i=1;i<=c;i++){
        get(i);

        move();
        for(int j=0;j<v.size();j++)
            cout << v[j].r<<" "<<v[j].c<<" "<<v[j].d<<"\n";
        cout<<"\n";
    }
    cout << ans;
    return 0;
}