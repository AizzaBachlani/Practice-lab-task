#include<stdio.h>
int main(){
    int n, i, j, top, bottom, left, right;
    int matrix[100][100];
    int num = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    top = 0;
    bottom = n - 1;
    left = 0;
    right = n - 1;
    while (top<=bottom && left<=right) {
        for (j = left; j <= right; j++)
            matrix[top][j] = num++;
        top++;
        for (i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;
        if (top <= bottom) {
            for (j = right; j >= left; j--)
                matrix[bottom][j] = num++;
            bottom--;
        }
        if (left <= right) {
            for (i = bottom; i >= top; i--)
                matrix[i][left] = num++;
            left++;
        }
    }
    printf("\nSpiral Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%02d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
