#include <bits/stdc++.h>

using namespace std;
int n,a,c;
int main()
{
    cin >> n;

    for(int i=n;i>=1;i--)
        if(i%5==0){
            c=i;
            while(c%5==0){
                a++;

                c/=5;
            }
        }

    cout<<a;

    return 0;
}
