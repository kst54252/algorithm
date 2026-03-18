#include<bits/stdc++.h>
int a, ans;
char n[40];
int main(){
    scanf("%s",&n);
    scanf("%d",&a);
    for(int i=0;i<strlen(n);i++){
        if(n[i]>='0'&&n[i]<='9')
            ans = ans*a + n[i] - '0';
        else
            ans = ans*a + n[i] - 55;
    }
    printf("%d",ans);
	return 0;
}