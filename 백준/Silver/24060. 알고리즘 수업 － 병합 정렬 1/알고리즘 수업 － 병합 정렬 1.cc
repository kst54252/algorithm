#include<bits/stdc++.h>>
using namespace std;
int n, m, cnt, ans=-1, a[500000], sorted[500000];
void merge(int list[], int L, int M, int R){
    int i, j, k;
    i = L; j = M+1; k = L;

    while(i<=M && j<=R){
        if(list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    if(i>M)
        for(int l=j; l<=R; l++)
            sorted[k++] = list[l];

    else
        for(int l=i; l<=M; l++)
            sorted[k++] = list[l];

    for(int l=L; l<=R; l++){
        list[l] = sorted[l];
        cnt++;
        if(cnt == m)
            ans = list[l];
    }
}

void merge_sort(int list[], int L, int R){
    int M;

    if(L<R){
        M = (L+R)/2;
        merge_sort(list, L, M);
        merge_sort(list, M+1, R);
        merge(list, L, M, R);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> a[i];

    merge_sort(a, 0, n-1);
    cout << ans;
}