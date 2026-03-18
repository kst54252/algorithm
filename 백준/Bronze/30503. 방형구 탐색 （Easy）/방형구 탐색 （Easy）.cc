#include<bits/stdc++.h>
using namespace std;
int n, m, a[1001],b,c,d,e;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> b;
        if(b == 1){
            cin >> c >> d >> e;
            int cnt=0;
            for(int j=c-1;j<d;j++)
                if(a[j] == e)
                    cnt++;
            cout<<cnt<<"\n";
        }
        else{
            cin >> c >> d;
            for(int j=c-1;j<d;j++)
                a[j]=0;
        }
    }
    
}
