#include <stdio.h>

int main(){
	
	int x[10];

	for(int i = 1; i <= 10; i++){
		x[i] = 10 - i;
	       	printf("%d ", x[i]);	
	}

	return 0;
}
