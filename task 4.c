#include<stdio.h>
int main(){
	int n, i, j;
	printf("Enter a number for inverted pyramid : ");
	scanf("%d", &n);
	for(i=n ; i>=1; i--){
		for(j=1; j<=i; j++){
			if(j==1 || j==i || i==n){
				printf("* ");
			}
			else
			    printf("  ");
		}
		printf("\n");
	}
}
