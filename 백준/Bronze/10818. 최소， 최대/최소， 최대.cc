#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,mn=1000000,mx=-1000000;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        mn=min(mn,a);
        mx=max(mx,a);
    }
    printf("%d %d",mn,mx);
}