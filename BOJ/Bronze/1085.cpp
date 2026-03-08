#include <bits/stdc++.h>

using namespace std;
int x,y,w,h;
int main()
{
    cin>>x>>y>>w>>h;
    printf("%d",min(min(x,y),min(w-x,h-y)));
    return 0;
}
