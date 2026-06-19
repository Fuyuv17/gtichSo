#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void moFile(FILE **f, const char *fileName, const char *openMode) {
	*f = fopen(fileName, openMode);
	
	if(*f == NULL) {
		exit(-1);
	}
}

void nhapFile(FILE *f, int *n, int *m, int **a, int **b) {
	fscanf(f, "%d%d", n, m);
	
	*a = (int*)malloc(*n * sizeof(int));
	*b = (int*)malloc(*m * sizeof(int));
	for(int i=0;i<*n;i++) {
		fscanf(f, "%d", &(*a)[i]);
	}
	for(int i=0;i<*m;i++) {
		fscanf(f, "%d", &(*b)[i]);
	}
}

void min(int n, int *a) {
	int min=a[0];
	for(int i=1;i<n;i++) {
		if(min<=a[i]) {
			min = a[i];
		}
	}
	printf("\nMinA : %d", min);
}

void max(int m, int *b) {
	int max=b[0];
	for(int i=1;i<m;i++) {
		if(max>=b[i]) {
			max = b[i];
		}
	}
	printf("\nMaxB : %d", max);
}

int main () {
	FILE *f;
	int n, m, *a, *b;
	
	moFile(&f, "daThuc.txt", "r");
	nhapFile(f, &n, &m, &a, &b);
	min(n, a);
	max(m, b);
	fclose(f);
	return 0;
} 
