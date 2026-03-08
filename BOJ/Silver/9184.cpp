#include<bits/stdc++.h>
using namespace std;
int a,b,c,ch[51][51][51];
int w(int a, int b, int c){
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);
	if (ch[a][b][c])
		return ch[a][b][c];
	if (a < b && b < c){
		ch[a][b][c] = w(a, b, c-1)+w(a, b-1, c-1)-w(a, b-1, c);
		return ch[a][b][c];
	}

	ch[a][b][c] = w(a-1, b, c)+w(a-1, b-1, c)+w(a-1, b, c-1)-w(a-1, b-1, c-1);
	return ch[a][b][c];
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(1){
        cin >> a >> b >> c;
        if(a==-1 && b==-1 && c==-1)
            break;
        else
            cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<"\n";
    }
    return 0;
}