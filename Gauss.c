#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i, j, k;
    float t, s;
    
    printf("Nhap co matrix A: ");
    scanf("%d", &n);
   
    float a[n][n];
    printf("Nhap matrix A: \n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%f", &a[i][j]);
        }
    }
    
    printf("\nNhap ve phai B:\n");
    float b[n];
    for(i = 0; i < n; i++) {
        scanf("%f", &b[i]);
    }
    
    for(k = 0; k < n - 1; k++) {
        for(i = k + 1; i < n; i++) {
            t = a[i][k] / a[k][k];
            for(j = k; j < n; j++) {
                a[i][j] = a[i][j] - t * a[k][j];
            }
            b[i] = b[i] - t * b[k];
        }
    }

    printf("\nMa tran tam giac A sau khi khu:\n");
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            printf(" %8.2f ", a[i][j]);
        }
        printf(" | %8.2f\n", b[i]);
    }
    
    float x[n];
    
    for(i=n-1;i>=0;i--) {
        s = b[i];
        for(j=i+1;j<n;j++) {
            s = s - a[i][j] * x[j];
        }
        x[i] = s / a[i][i];
    }
    
    printf("\nKet qua nghiem:\n");
    for(i = 0; i < n; i++) {
        printf("x[%d] = %.2f\n", i, x[i]);
    }
    
    return 0;
}
