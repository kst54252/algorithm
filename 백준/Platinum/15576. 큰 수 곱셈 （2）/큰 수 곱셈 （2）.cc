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

string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0") return "0";

    vector<Complex> a(num1.size()), b(num2.size());
    for (int i = 0; i < num1.size(); i++)
        a[i] = Complex(num1[num1.size() - 1 - i] - '0', 0);
    for (int i = 0; i < num2.size(); i++)
        b[i] = Complex(num2[num2.size() - 1 - i] - '0', 0);

    int n = 1;
    while (n < num1.size() + num2.size()) n <<= 1;
    a.resize(n);
    b.resize(n);
    fft(a, false);
    fft(b, false);

    for (int i = 0; i < n; i++)
        a[i] *= b[i];
    
    fft(a, true);

    for (int i = 0; i < n; i++)
        a[i] /= n;
    
    vector<int> result(n);
    for (int i = 0; i < n; i++)
        result[i] = round(a[i].real());
    
    for (int i = 0; i < n - 1; i++) {
        result[i + 1] += result[i] / 10;
        result[i] %= 10;
    }
    int last = n - 1;
    while (last >= 0 && result[last] == 0) last--;
    
    string final_res = "";
    for (int i = last; i >= 0; i--)
        final_res += to_string(result[i]);

    return final_res;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    string A, B;
    cin >> A >> B;

    cout << multiply(A, B);
    return 0;
}