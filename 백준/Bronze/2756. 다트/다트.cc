#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    while(N--){
    double x,y;
    int a=0, b=0;
    for(int i=0;i<3;i++){
        cin >> x >> y;
        double d = x * x + y * y;
        if(d <= 9)
            a+=100;
        else if(d <= 36)
            a+=80;
        else if(d <= 81)
            a+=60;
        else if(d <= 144)
            a+=40;
        else if(d <= 225)
            a+=20;
    }
    for(int i=0;i<3;i++){
        cin >> x >> y;
        double d = x * x + y * y;
        if(d <= 9)
            b+=100;
        else if(d <= 36)
            b+=80;
        else if(d <= 81)
            b+=60;
        else if(d <= 144)
            b+=40;
        else if(d <= 225)
            b+=20;
    }
    cout<<"SCORE: "<<a<<" to "<<b;
    if(a > b)
        cout<<", PLAYER 1 WINS.\n";
    else if(a<b)
        cout<<", PLAYER 2 WINS.\n";
    else
        cout<<", TIE.\n";
}
    return 0;
}