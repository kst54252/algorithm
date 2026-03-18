#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    int a, b;
   while(1){
cin>>s>>a>>b;
if(s=="#")break;
       cout<<s;
if(a>17||b>=80)cout<<" Senior\n";
else cout<<" Junior\n";

}
return 0;
}

