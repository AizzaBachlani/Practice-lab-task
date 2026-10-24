#include<stdio.h>
int main(){
    int n, i, j, num;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=1; j<=n-i-1; j++){
            printf(" ");
        }
        num = 1;
        for(j= 0; j<=i; j++){
            printf("%d ", num);
            num = num*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
