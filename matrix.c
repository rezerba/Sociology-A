#include <stdio.h>

void cal_sqmat(int a[][5], int d[][5]){
	int i, j, k;

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			d[i][j] = 0;
			for(k = 0; k < 5; k++){
				d[i][j] += a[i][k] * a[k][j];
			}
		}
	}
}

void print_sqmat(int d[][5]){
	int i, j;

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int a[5][5], d2[5][5], d3[5][5];
	int i, j;

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n---D---\n");
	print_sqmat(a);

	printf("\n---D2---\n");
	cal_sqmat(a, d2);
	print_sqmat(d2);

	printf("\n---D3---\n");
	cal_sqmat(d2, d3);
	print_sqmat(d3);
	
	return 0;
}
