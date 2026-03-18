#include<bits/stdc++.h>
using namespace std;
int n,m,a[21][21];
string s,s1;
vector<string>v;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<m;j++){
            a[i][j]=s[j];
            if(s[j]=='#'||j==m-1){
                if(s[j]!='#')
                    s1.push_back(char(s[j]));
                if(s1.size()>1)
                    v.push_back(s1);
                
                s1="";
            }
            else
                s1.push_back(char(s[j]));
        }
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(a[j][i]=='#'||j==n-1){
                if(a[j][i]!='#')
                    s1.push_back(char(a[j][i]));
                if(s1.size()>1)
                    v.push_back(s1);
                s1="";
            }
            else
                s1.push_back(char(a[j][i]));
                

    sort(v.begin(),v.end());
    cout<<v[0];
}