#include <stdio.h>
#include "../tbt_sort.h"

int main()
{
	int a = 0;
	int b = 0;
	int l = 21;
	int g = 20;
	printf("%d\n", __ISEQ__(a, b));
	printf("%d\n", __ISEV__(l));
	printf("%d\n", __ISEV__(g));
	return 0;
}
