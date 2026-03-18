#include <bits/stdc++.h>

using namespace std;
using Complex = complex<double>;
const double PI = acos(-1);

void fft(vector<Complex>& a, bool invert) {
    int n = a.size();
    
    if (n == 1) return;
    vector<Complex> even(n / 2), odd(n / 2);
    for (int i = 0; i < n / 2; i++) {
        even[i] = a[i * 2];
        odd[i]  = a[i * 2 + 1];
    }

    fft(even, invert);
    fft(odd, invert);

    double ang = 2 * PI / n * (invert ? -1 : 1);
    Complex w(1), wlen(cos(ang), sin(ang));
    
    for (int i = 0; i < n / 2; i++) {
        a[i] = even[i] + w * odd[i];
        a[i + n / 2] = even[i] - w * odd[i];
        w *= wlen;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, b, ans = 0, size = 524288;
    cin >> n;
    vector<Complex> P(size, Complex(0, 0));
    P[0] = Complex(1, 0);
    for(int i=0;i<n;i++){
        int dist;
        cin >> dist;
        P[dist] = Complex(1, 0);
    }
    fft(P, false);

    for (int i = 0; i < size; i++)
        P[i] *= P[i];
    
    fft(P, true);
    cin >> m;
    
    for(int i=0;i<m;i++){
        cin >> b;
        if(round(P[b].real()) > 0)
            ans++;    
    }

    cout << ans;
    return 0;
}