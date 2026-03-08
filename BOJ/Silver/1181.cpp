#include <bits/stdc++.h>

using namespace std;
int n;
string s[20000];
bool AA(string p,string q){
    if(q.size()==p.size())
        return p<q;
    else
        return q.size()>p.size();

}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n,AA);

    for(int i=0;i<n;i++)
        if(s[i]!=s[i+1])
        cout<<s[i]<<"\n";


    return 0;
}
