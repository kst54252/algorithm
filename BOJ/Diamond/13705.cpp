#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C;
    if (!(cin >> A >> B >> C)) return 0;

    double low = 0.0;
    double high = 200000.0;

    // while (high - low > 1e-7) 같은 조건은 가파른 기울기에서 반올림 오차를 유발합니다.
    // 100번 for문으로 강제 반복하는 것이 백준에서 가장 안전하고 확실한 방법입니다.
    for (int i = 0; i < 100; i++) {
        double mid = low + (high - low) / 2.0;
        
        if (A * mid + B * sin(mid) < C) {
            low = mid;
        } else {
            high = mid;
        }
    }

    cout << fixed << setprecision(6) << low << "\n";
    
    return 0;
}