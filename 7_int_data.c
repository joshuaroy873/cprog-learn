#include<stdio.h>
#include<limits.h>

int main()
{
	int var1 = INT_MIN;
	int var2 = INT_MAX;
	// By default, 'int' takes 4 bytes.

	unsigned int var3 = 0;
	unsigned int var4 = UINT_MAX;

	short int var4 = SHRT_MIN;
	short int var5 = SHRT_MAX;
	// Short int takes 2 bytes.

	short unsigned int var6 = 0;
	short unsigned int var7 = USHRT_MAX;

	printf("Signed integers: MIN=%d, MAX=%d\n", var1, var2);
	printf("Unsigned integers: MIN=%d, MAX=%u", var3, var4);
	
	printf("Short integers: MIN=%d, MAX
 
		
	return 0;
}
