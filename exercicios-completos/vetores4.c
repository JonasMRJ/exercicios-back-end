#include <stdio.h>

int main(){
	
	int x[10];

	for(int i = 0; i <= 10; i++){
		if(i % 2 == 0){
			x[i] = 5;
		}else{
			x[i] = 3;
		}

		printf("%d ", x[i]);
	}

	return 0;
}
