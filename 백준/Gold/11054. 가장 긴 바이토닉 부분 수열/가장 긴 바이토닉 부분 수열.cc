#include <bits/stdc++.h>
using namespace std;
int n, ans, a[1001],l[1001],r[1001];
vector<int> v, v1;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<=n;i++){

        if(v.size() == 0 || v[v.size()-1] < a[i])
            v.push_back(a[i]);
    
        else{
            int L = 0;
            int R = v.size()-1;
            while(L<R){
                int M = (R + L)/2;

                if(v[M] >= a[i])
                    R = M;
                else
                    L = M+1;
            }
            v[L] = a[i];
        }
        if(v1.size() == 0 || v1[v1.size()-1] < a[n-i+1])
            v1.push_back(a[n-i+1]);
        
        else{
            int L = 0;
            int R = v1.size()-1;
            while(L<R){
                int M = (R + L)/2;

                if(v1[M] >= a[n-i+1])
                    R = M;
                else
                    L = M+1;
            }
            v1[L] = a[n-i+1];
        }
        l[i]=v.size();
        r[i]=v1.size();
    }
    for(int i=1;i<=n;i++)
        ans = max(ans, l[i]+r[n-i+1]);
    cout << ans-1;

    return 0;
}
