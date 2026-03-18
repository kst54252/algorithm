#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int ans=s.size();
    for(int i=0;i<s.size();i++){
        if (s[i] == 'c') {
			if (s[i + 1] == '=')
				ans--;
			else if (s[i + 1] == '-')
				ans--;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == '-')
				ans--;
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
				ans--;
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j')
				ans--;
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j')
				ans--;
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=')
				ans--;
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=')
				ans--;
		}
    }
    cout << ans;
    return 0;
}