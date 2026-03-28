#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, k;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> A[i][j];
    cin >> m >> k;
    vector<vector<int>> B(m, vector<int>(k));
    for(int i=0;i<m;i++)
        for(int j=0;j<k;j++)
            cin >> B[i][j];

    vector<vector<int>> C(n, vector<int>(k, 0));
    for(int i=0;i<n;i++)
        for(int j=0;j<k;j++)
            for(int l=0;l<m;l++)
                C[i][j] += A[i][l] * B[l][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++)
            cout << C[i][j] << " ";
        cout<<"\n";
    }
    return 0;
}
