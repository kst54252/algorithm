#include <bits/stdc++.h>

using namespace std;

long long n;
long long a[100010];

int main(){
    //freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];
    a[n] = -1;

    stack<int> s;
    long long ans = 0;
    for(int i=0;i<=n;i++){

        while(!s.empty() && a[i] < a[s.top()]){
            int x,y;

            x = s.top();
            s.pop();

            if(s.empty())
                y = i;
            else
                y = i-s.top()-1;

            ans = max(ans, a[x]*y);
        }
        s.push(i);
    }

    cout << ans << '\n';
}
