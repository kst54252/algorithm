#include <bits/stdc++.h>

using namespace std;

int n,m,a,num,ccc,rr;
string s,ss;
deque<int>v;


int main()
{
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i=0;i<n;i++){
        rr=0;ccc=0;

        cin >> s;
        cin >> m;
        cin >> ss;

        for(int j=1;j<ss.size();j++){

            if(ss[j]>='0'&&ss[j]<='9')
                num=num*10+ss[j]-'0';

            else if(j!=1){
                v.push_back(num);
                num=0;
            }
        }

        for(int j=0;j<s.size();j++){

            if(s[j]=='R')
                rr=(rr+1)%2;


            else{
                if(v.empty()){
                    cout<<"error\n";
                    ccc=1;
                    break;
                }
                else{
                    if(rr)
                        v.pop_back();
                    else
                        v.pop_front();
                }
            }

        }

        if(!v.empty()){
            if(!rr){
                cout<<'['<<v[0];

                for(int j=1;j<v.size();j++)
                    cout<<','<<v[j];

                cout<<"]\n";
            }
            else{
                cout<<'['<<v[v.size()-1];

                for(int j=v.size()-2;j>=0;j--)
                    cout<<','<<v[j];

                cout<<"]\n";
            }
        }
        if(v.empty()&&!ccc)
            cout<<"[]\n";
        v.clear();
    }

    return 0;
}
