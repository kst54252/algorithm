#include <bits/stdc++.h>

using namespace std;
int a,b,arr[100001]={1,},ans;
int main()
{
    for(int i=2;i<=50000;i++)
        if(!arr[i])
            for(int j=i*2;j<=100000;j+=i){

                int cnt = 0;
                int x = j;

                while(x%i==0){
                    cnt++;
                    x /= i;
                }

                arr[j] += cnt;
            }
    //for(int i=1;i<=50;i++)
    //    cout<<arr[i]<<" ";

    cin >> a >> b;

    for(int i=a;i<=b;i++)
        if(!arr[arr[i]])
            ans++;

    cout << ans;
    return 0;
}
