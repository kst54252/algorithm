#include <bits/stdc++.h>
using namespace std;
int n, w, h, a;
int main (){
    
    cin >> n >> w >> h;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a*a <= w*w+h*h)
            cout << "DA\n";
        else
            cout << "NE\n";
    }

    
    return 0;
}
