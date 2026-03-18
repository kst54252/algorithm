#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d;
    string s;
    cin >> n >> d;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int j=0;j<n;j++){
            if(d==1){
                if(s[j] == 'd')
                    cout << 'q';
                if(s[j] == 'b')
                    cout << 'p';
                if(s[j] == 'q')
                    cout << 'd';
                if(s[j] == 'p')
                    cout << 'b';
            }   
            else{
                if(s[j] == 'd')
                    cout << 'b';
                if(s[j] == 'b')
                    cout << 'd';
                if(s[j] == 'q')
                    cout << 'p';
                if(s[j] == 'p')
                    cout << 'q';
            }
        }
        cout << "\n";
    }
    return 0;
}