#include <bits/stdc++.h>
using namespace std;
int n;
long long int arr[100001];
long long int a,b;

int main() {

    cin >> n;
    for (int i=0;i<n;i++)
        cin >> arr[i];

    int L = 0; int R = n-1;

    int mn = abs(arr[L] + arr[R]);
    a = arr[L]; b = arr[R];

    while(L < R){
        int x = arr[L] + arr[R];
        if(abs(x) < mn){
            mn = abs(x);
            a = arr[L];
            b = arr[R];
        }

        if (x < 0) 
            L++;
        else 
            R--;
    }

    cout << a << " " << b << "\n";
}