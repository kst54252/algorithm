#include<bits/stdc++.h>
using namespace std;
int n,m, t, p, a, b, c;
int arr[200001], off[200001];
long long sum;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> m;
    cout << sum <<"\n";
    for(int i=0;i<m;i++){
        cin >> a >> b;
        if(a == 2){
            if(!off[b-1]){
                sum-=arr[b-1];
                off[b-1]=1;
            }
            else{
                sum+=arr[b-1];
                off[b-1]=0;
            }
            cout << sum<<"\n";
        }
        else{
            cin >> c;
            if(!off[b-1])
                sum=sum+c-arr[b-1];
            arr[b-1] = c;    
            cout << sum <<"\n";
        }
    }


    return 0;
}
