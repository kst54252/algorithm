#include <bits/stdc++.h>

char fuck[102];

int main(){
    for(int i = 0; i < 100; i++)
        fuck[i] = '2';
    
    int nn, n;
    scanf("%d", &nn);

    for(int i = 0; i < 100; i++){
        fuck[i] = '0';
        printf("? %s\n", fuck);
        fflush(stdout);

        scanf("%d", &n);
        if(n == 100){
            break;
        }

        if(n < nn){
            fuck[i] = '2';
        }
        else if(n == nn){
            fuck[i] = '5';
            nn++;
        }
        else nn++;

    }
    for(int i = 0; i < 100; i++){
        switch (fuck[i]){
        case '0':
            fuck[i] = '2';
            break;
        case '2':
            fuck[i] = '5';
            break;
        case '5':
            fuck[i] = '0';
            break;
        }
    }
    printf("! %s\n", fuck);
    fflush(stdout);
    return 0;
}