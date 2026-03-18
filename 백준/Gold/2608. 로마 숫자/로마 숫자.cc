#include <bits/stdc++.h>

using namespace std;
string s,s1;
map<char,int> m;
int a[20],b[20],c[4],n;
void f1(int m){
    for(int i=0;i<m;i++)
        printf("M");
}
void f2(int m){
    if(m<=3)
        for(int i=0;i<m;i++)
        printf("C");
    else if(m==4)
        printf("CD");
    else if(m==9)
        printf("CM");
    else{
        printf("D");
        for(int i=0;i<m-5;i++)
            printf("C");
    }
}
void f3(int m){
    if(m<=3)
        for(int i=0;i<m;i++)
        printf("X");
    else if(m==4)
        printf("XL");
    else if(m==9)
        printf("XC");
    else{
        printf("L");
        for(int i=0;i<m-5;i++)
            printf("X");
    }
}
void f4(int m){
    if(m<=3)
        for(int i=0;i<m;i++)
        printf("I");
    else if(m==4)
        printf("IV");
    else if(m==9)
        printf("IX");
    else{
        printf("V");
        for(int i=0;i<m-5;i++)
            printf("I");
    }
}
int main(){
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    //freopen("input.txt","r",stdin);
    cin >> s >> s1;
    for(int i=0;i<s.size();i++){
        a[i]=m[s[i]];
        n+=a[i];
        if(i>0&&a[i]>a[i-1])
            n-=a[i-1]*2;
    }
    for(int i=0;i<s1.size();i++){
        b[i]=m[s1[i]];
        n+=b[i];
        if(i>0&&b[i]>b[i-1])
            n-=b[i-1]*2;
    }
    printf("%d\n",n);
    for(int i=0;i<4;i++){
        c[i]=n%10;
        n/=10;
    }
    if(c[3])
        f1(c[3]);
    if(c[2])
        f2(c[2]);
    if(c[1])
        f3(c[1]);
    if(c[0])
        f4(c[0]);
    return 0;
}
