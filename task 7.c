#include<stdio.h>
int main(){
	int n, i, j;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(j==1 || i==1 || i==n || j==n){
				printf("* ");
			}
			else
			    printf("  ");
		}
		printf("\n");
	}
}
