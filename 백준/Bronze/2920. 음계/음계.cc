#include <bits/stdc++.h>

using namespace std;
int n;
int asc,des;
int main()
{
    
    for(int i=0;i<8;i++){
        scanf("%d",&n);
        if(i+1!=n)
            asc=1;
        if(8-i!=n)
            des=1;
    }
    if(asc==0)
        printf("ascending");
    else if(des==0)
        printf("descending");
    else
        printf("mixed");
    return 0;
}
