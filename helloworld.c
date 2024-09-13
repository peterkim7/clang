#include <stdio.h>
int main()
{
	short int i;
	// scanf("%d", &i);

	//printf("input is %d\n", i);
	printf("Data size for int : %d \n", sizeof(int));
	printf("Data size for short int : %d \n", sizeof(short int));
	printf("Data size for char  : %d \n", sizeof(char));
	printf("Data size for long : %d \n", sizeof(long));
	printf("Data size for double : %d \n", sizeof(double));

	return 0;
}
