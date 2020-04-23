#include <stdio.h>

int main(void)
{
	printf
	    ("Kérek egy számot decimálisan: ");

	int decnum = 0;
	scanf("%d", &decnum);
	
	printf("A szám unárisan:");
	
	for (int i = 0; i < decnum; ++i)
		(i % 5) ? printf("|") : printf(" |");

	printf("\n");
	return 0;
}