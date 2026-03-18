#include <bits/stdc++.h>

using namespace std;
int n, a[1000001],b[1000001];
vector<int> v;
int main()
{
    //freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<=n;i++){

        if(v.size() == 0 || v[v.size()-1] < a[i]){
            v.push_back(a[i]);
            b[i]=v.size()-1;
        }
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
            b[i] = L;
        }
    }
    cout << v.size() << "\n";
    stack<int> ans;
    int N = v.size() - 1;
    for(int i=n;i>=1;i--)
        if(b[i] == N){
            N--;
            ans.push(a[i]);
        }
    while(!ans.empty()){
        cout << ans.top()<<" ";
        ans.pop();
    }

    return 0;
}
