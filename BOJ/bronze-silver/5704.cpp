#include <bits/stdc++.h>
using namespace std;
string s;
int a[30], cnt=1, is_p;
int main (){
    while(1){
        getline(cin,s);
        if(s=="*")
            break;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '&&a[s[i]-'a']!=cnt){
                is_p++;
                a[s[i]-'a']=cnt;
            }
        }
        if (is_p==26)
            cout << "Y\n";
        else
            cout << "N\n";
        is_p=0;
        cnt++;
    }
    
    return 0;
}
