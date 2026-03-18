#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,t,arr[301],arr1[301];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++)
        cin >> arr[i];
    
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        for(int j=1;j<=n;j++)
            arr1[j]=arr[j];

        for(int j=1;j<=n;j++)
            for(int k=j+1;k<=n;k++)
                if(arr1[j]>=a && arr1[j]<=b && arr1[k]>=a && arr1[k]<=b)
                    if(arr1[j]>arr1[k]){    
                        t = arr1[k];
                        arr1[k]=arr1[j];
                        arr1[j]=t;
                    }
        for(int j=1;j<=n;j++)
            cout<<arr1[j]<<" ";
        cout<<"\n";
    }
    return 0;
}