#include<stdio.h>
int main(){
	int n, i, j, spaces;
	printf("Enter a number : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(spaces=1; spaces<=i; spaces++){
			printf("  ");
		}
		for(j=1; j<=n; j++){
			printf("* ");
		}
		printf("\n");
	}
}
