#include <bits/stdc++.h>
using namespace std;
int a, ans, arr[10];

int main() {
    cin >> a;
    while(a>0){
        int n=a%10;
        arr[n]--;
        if(arr[6]==-1&&arr[9]>=1){
            arr[6]=0;
            arr[9]--;
        }
        if(arr[9]==-1&&arr[6]>=1){
            arr[9]=0;
            arr[6]--;
        }
        if(arr[n]==-1){
            ans++;
            for(int i=0;i<10;i++)
                arr[i]++;
        }
        a=a/10;
    }
    cout << ans;
    return 0;
}