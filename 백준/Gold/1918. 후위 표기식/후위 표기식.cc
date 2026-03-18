#include <bits/stdc++.h>

using namespace std;
string s;
stack<int> st;
int main()
{
    //freopen("input.txt","r",stdin);
    cin >> s;
    for(int i=0;i<s.size();i++){

        if(s[i]>='A' && s[i]<='Z')
            cout <<s[i];

        else if(s[i]=='(')
            st.push(s[i]);

        else if(s[i] == ')'){
            while(!st.empty()){
                if(st.top()=='('){
                    st.pop();
                    break;
                   }
                printf("%c",st.top());

                st.pop();

            }
        }
        else if(s[i]=='*'||s[i]=='/'){
            if(!st.empty()){
                if(st.top()=='*'||st.top()=='/'){
                    printf("%c",st.top());
                    st.pop();
                }
                st.push(s[i]);
            }
            else
                st.push(s[i]);
        }
        else{
            while(!st.empty()&&st.top()!='(')
                if(st.top()!='('){
                printf("%c",st.top());
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while(!st.empty()){
        printf("%c",st.top());
        st.pop();
    }
    return 0;
}
