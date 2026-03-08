#include<bits/stdc++.h>
using namespace std;
int n, sum;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    while(1){
        cin >> n;
        sum = 1;
        if(n == -1) break;
        
        for(int i=2;i<n;i++)
            if(n%i == 0) sum+=i;

        if(sum == n){
            cout<<n<<" = 1";
            for(int i=2;i<n;i++)
                if(n%i == 0)
                    cout<<" + "<<i;
            cout<<"\n";
        }
        else
            cout<<n<<" is NOT perfect.\n";
    }
    return 0;
}