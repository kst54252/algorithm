#include <bits/stdc++.h>

using namespace std;
string s;
int cnt=0;
int main()
{
    while(1){
        cin>>s;
        if(s=="0")
            break;

        cnt=0;
        for(int i=0;i<s.size()/2;i++)
            if(s[i]!=s[s.size()-1-i])
                cnt++;
        if(!cnt)
            cout<<"yes\n";
        else
            cout<<"no\n";

    }
    return 0;
}
