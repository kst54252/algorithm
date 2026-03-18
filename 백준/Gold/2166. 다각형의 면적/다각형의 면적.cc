#include<bits/stdc++.h>
using namespace std;
double n;
vector<pair<double,double>> v;
double CCW(pair<double,double> a, pair<double,double> b, pair<double,double> c){
    return (double)(a.first*b.second)+(b.first*c.second)+(a.second*c.first)-(b.first*a.second)-(c.first*b.second)-(a.first*c.second);
}
int main(void){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    v.resize(n);

    for(int i=0;i<n;i++)
        cin >> v[i].first >> v[i].second;
  
    double answer = 0;
    for(int i=1; i<n-1; i++)
        answer -= CCW(v[0], v[i], v[i+1]) /(double)2;
    cout << fixed;
    cout.precision(1);
    cout<<abs(answer);
    return 0;
}