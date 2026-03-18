#include<bits/stdc++.h>
char a[5][15];
int main(){
    
	for(int i=0;i<5;i++)
        scanf("%s",a[i]);
    
    for(int i=0;i<15;i++)
        for(int j=0;j<5;j++)
            if(a[j][i] != '\0')
                printf("%c",a[j][i]);
	return 0;
}