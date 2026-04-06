#include <bits/stdc++.h>
using namespace std;
int MOD = 1000000009;
typedef vector<vector<long long>> Matrix;

Matrix multiply(Matrix A, Matrix B, int size){
    Matrix C(size, vector<long long>(size, 0));
    for(int i=0;i<size;i++){
        for(int k=0;k<size;k++){
            if(A[i][k] == 0)
                continue; 
            for(int j=0;j<size;j++)
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
        }
    }
    return C;
}
Matrix power(Matrix A, long long p, int size) {
    Matrix res(size, vector<long long>(size, 0));
    for(int i=0;i<size;i++)
        res[i][i] = 1;
    
    while(p > 0){
        if(p % 2 == 1)
            res = multiply(res, A, size);
        A = multiply(A, A, size);
        p /= 2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int T;
    cin >> T;
    
    for(int k=0;k<T;k++){
        long long M, N;
        cin >> M >> N;

        int K = 1 << M;
        int size = K * K; 
        
        Matrix T_mat(size, vector<long long>(size, 0));

        for(int A = 0; A < K; A++)
            for(int B = 0; B < K; B++) 
                for(int C = 0; C < K; C++)
                    for(int D = 0; D < K; D++)
                        if(B == C)
                            if(((A << 2) & B) == 0 && ((A >> 2) & B) == 0 && ((A << 1) & D) == 0 && ((A >> 1) & D) == 0){
                                int next_state = A * K + B;
                                int prev_state = C * K + D;
                                T_mat[next_state][prev_state] = 1;
                            }

        Matrix res = power(T_mat, N, size);
        long long ans = 0;
        for(int i=0;i<size;i++)
            ans = (ans + res[i][0]) % MOD;

        cout << ans << "\n";
    }
    
    return 0;
}