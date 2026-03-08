#include <bits/stdc++.h>

using namespace std;
int n,x,y;
double a[100],b[100],mn;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        scanf("%lf %lf",&a[i],&b[i]);

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(sqrt( (a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))>mn){
                x=(a[i]+a[j])/2;
                y=(b[i]+b[j])/2;
                mn=sqrt( (a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
            }
    printf("%d %d %.10lf",x,y,mn/2);
    return 0;
}
