#include <bits/stdc++.h>

using namespace std;
int n, m,k;
vector<int>a;
void f(vector<int>v, int cnt){
    if(cnt == m){
        for(int i=1;i<v.size();i++)
            cout<<a[v[i]]<<" ";
        cout<<"\n";
    }
    else{
        for(int i=0;i<n;i++)
            if(v.back()<i){
                v.push_back(i);
                f(v,cnt+1);
                v.pop_back();
        }
    }


}
vector<int> vv;
int main()
{
    vv.push_back(-1);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(int i=n-2;i>=0;i--)
        if(a[i]==a[i+1])
            a.erase(a.begin()+i);

    n=a.size();
    f(vv, 0);
    return 0;
}
