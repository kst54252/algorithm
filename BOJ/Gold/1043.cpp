#include <bits/stdc++.h>

using namespace std;
int n,m,nn,mm,nm,a,cnt,ans;
int ch[51][51],tr[50],relate[51][51];
vector<int>v[51];
int main(){

    //freopen("input.txt","r",stdin);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    cin >> nn;

    for(int i=0;i<nn;i++){
        cin >> a;
        tr[a]=1;
    }

    for(int i=0;i<m;i++){

        cin >> mm;

        for(int j=0;j<mm;j++){
            cin >> nm;
            v[i].push_back(nm);
        }

        for(int j=0;j<mm;j++)
            if(tr[v[i][j]]){
                for(int k=0;k<mm;k++)
                    tr[v[i][k]]=1;

                break;
            }
    }

    for(int p=0;p<50;p++){

        for(int i=0;i<m;i++){

        for(int j=0;j<v[i].size();j++)
            if(tr[v[i][j]]){
                for(int k=0;k<v[i].size();k++)
                    tr[v[i][k]]=1;

            }
        }
    }

    for(int i=0;i<m;i++){

        cnt=0;

        for(int j=0;j<v[i].size();j++)
            cnt+=tr[v[i][j]];

        if(!cnt)
            ans++;
    }
    cout << ans;
    return 0;
}
