#include <bits/stdc++.h>

using namespace std;
int n,nm=1,t,a[100001];
stack<int> s;
string st;
int main()
{
    //freopen("input.txt","r",stdin);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >>a[i];

    while(t<n){
        if(!s.empty()){
            if(s.top()== a[t]){
                s.pop();
                st+="-\n";
                t++;
            }
            else{
                s.push(nm);
                st+="+\n";
                nm++;
            }
        }
        else{
            s.push(nm);
            st+="+\n";
            nm++;
        }
        if(nm>n+1){
            cout<<"NO";
            return 0;
        }
    }
    cout<<st;

    return 0;
}
