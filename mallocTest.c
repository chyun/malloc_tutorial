#include <stdio.h>
#include "malloc.c"
int main(int argc, char *argv[]) {
	int *count, *array;
	array = malloc(10 * sizeof(int));
	if (array == NULL) {
　　		exit(1);
	}
	array += 1;
	printf("k=%d,at %p\n", *array, array);
	//for (count = 0; count < 10; count++) {
	//	array[count] = count;
	//}
	//for (count = 0; count<10; count++) {
		/*打印数组元素*/
　　	//	printf("%2d", array[count]);
	//}
	return 0;
}