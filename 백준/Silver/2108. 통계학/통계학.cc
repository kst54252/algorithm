#include <bits/stdc++.h>

using namespace std;
int n,a[500000],ch[8001],cnt,c,sum,mx;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        ch[a[i]+4000]++;
    }
    sort(a,a+n);
    if(round((double)sum/n)==0)
        printf("0\n");
    else
        printf("%g\n",round((double)sum/n));
    printf("%d\n",a[n/2]);

    for(int i=0;i<=8000;i++)
        mx=max(mx,ch[i]);
    for(int i=0;i<=8000;i++)
        if(ch[i]==mx)
            cnt++;
    for(int i=0;i<=8000;i++){
        if(ch[i]==mx){
            if(cnt==1){
                printf("%d\n",i-4000);
                break;
            }
            else if(c){
                printf("%d\n",i-4000);
                break;
            }
            else
                c=1;
        }
    }


    printf("%d",a[n-1]-a[0]);
    return 0;
}
