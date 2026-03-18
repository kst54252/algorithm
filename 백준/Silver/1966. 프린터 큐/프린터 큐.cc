#include <bits/stdc++.h>

using namespace std;
int nn,n,a,m,ch,cnt,m_x;
queue<int> q;

int max_val(queue<int> qq){
    int mv=0;
    while(!qq.empty()){
        mv=max(mv,qq.front());
        qq.pop();
    }
    return mv;
}

int main(){

    //freopen("input.txt","r",stdin);

    cin >> nn;
    for(int i=0;i<nn;i++){
        cin >> n >> m;
        for(int j=0;j<n;j++){

            cin >> a;
            q.push(a);
        }
            m_x=m;
            cnt=1;
            while(1){
                if(q.front() >= max_val(q)){
                    if(m_x==0){
                        cout<<cnt<<"\n";
                        break;
                    }

                    m_x--;
                    q.pop();
                    cnt++;
                }
                else{
                    if(m_x==0){
                        q.push(q.front());
                        q.pop();
                        m_x=q.size()-1;

                    }
                    else{
                        q.push(q.front());
                        q.pop();
                        m_x--;
                    }

                }

            }


            while(!q.empty())
                q.pop();

        }

    return 0;
}
