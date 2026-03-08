#include <bits/stdc++.h>
using namespace std;
string s;
int l, r, cnt;
bool isLeft(char c){
    char cc = tolower(c);
    string leftHand = "qwerytadsfgzxcvb";
    for (char l : leftHand)
        if (cc == l)
            return 1;
    return 0;
}
int main() {
    getline(cin, s);
    for(auto c : s){
        if(c == ' ') 
            cnt++;
        else{
            if(isupper(c)) 
                cnt++;
            if(isLeft(c))
                l++;
            else
                r++;
        }
    }
    for(int i=0;i<cnt;i++){
        if(l <= r)
            l++;
        else 
            r++;
    }
    cout << l << " " << r << "\n";
    return 0;
}