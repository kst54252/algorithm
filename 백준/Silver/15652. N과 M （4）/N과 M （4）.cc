#include <bits/stdc++.h>

using namespace std;
int n, m;
void f(vector<int>v, int cnt){
    if(cnt == m){
        for(int i=1;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<"\n";
    }
    else{
        for(int i=1;i<=n;i++){
            if(v.back()<=i){
                v.push_back(i);
                f(v,cnt+1);
                v.pop_back();
            }
        }
    }


}
vector<int> v;
int main()
{
    v.push_back(0);
    cin >> n >> m;
    f(v, 0);
    return 0;
}
