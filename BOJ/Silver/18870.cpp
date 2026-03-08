#include<bits/stdc++.h>
using namespace std;
int n;
long long a;
vector<long long> x1;
vector<long long> x2;

int main(){

    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a;
        x1.push_back(a);
        x2.push_back(a);
    }

    sort(x1.begin(), x1.end());
    x1.erase(unique(x1.begin(), x1.end()), x1.end());

    for (int i = 0; i < n; i++)
        cout << lower_bound(x1.begin(), x1.end(), x2[i]) - x1.begin() << " ";

}
