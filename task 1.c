#include<stdio.h>
int main(){
	int n, i, j;
	printf("Enter a number for inverted even number pyramid : ");
	scanf("%d", &n);
	for(i=n ; i>=1; i--){
		for(j=1; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}
