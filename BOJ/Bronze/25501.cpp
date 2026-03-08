#include<bits/stdc++.h>
int cnt;
int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}
int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}
int main(){
    int n, a;
    char s[1003];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        scanf("%s",&s);
        cnt = 0;
        a = isPalindrome(s);
        printf("%d %d\n",a,cnt);
    }
		
}