#include <stdio.h>
int main(){
    int n, i, j, spaces;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=2*n-1; i++){
        if(i<=n){
            spaces=n-i;
        }
		else{
            spaces=i-n;
        }
        for(j=1; j<=spaces; j++){
            printf("  ");
        }
        if(i==1 || i==2*n-1){
            printf("* ");
        }
		else{
            printf("* ");
            for(j=1; j<=2*(n-spaces)-3; j++){
                printf("  ");
            }
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
