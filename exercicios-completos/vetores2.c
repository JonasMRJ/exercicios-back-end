#include <stdio.h>

int main(){

	int x[10];

	for(int i = 1; i <= 10; i++){
		x[i] = i * 5;

		printf("%d ", x[i]);
	}

	return 0;
}
