#include <bits/stdc++.h>

using namespace std;
string s;
stack<int> st;
int cnt;
int main()
{
    //freopen("input.txt","r",stdin);
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')
           st.push(i);
        else{
            if(st.top()==i-1){
                st.pop();
                cnt+=st.size();
            }
            else{
                st.pop();
                cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
