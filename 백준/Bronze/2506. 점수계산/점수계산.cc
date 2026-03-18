#include <stdio.h>

int main(void){
    int n, i; int result[101], total = 0, count = 0;

    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &result[i]);
    if (result[0] == 1){
        count += 1; total += 1;
    }

    for(i=1;i<n;i++){
        if (result[i] == 0){
            count = 0;
            continue;
        }
        else if (result[i] == 1){
            count += 1;
            total += count;
        }
    }

    printf("%d", total);
    return 0;
}
