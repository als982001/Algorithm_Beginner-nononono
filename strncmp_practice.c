#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char st[128];
	puts("Compare first three letters with \"STRING\" \n");
	puts("This is over when you input \"XXXX\" \n");
	while (1)
	{
		printf("String st: ");
		scanf("%s", st);
		if (strncmp("XXXX", st, 3) == 0)
			break;
		printf("strncmp(\"STRING\", st, 3) = %d \n", strncmp("STRING", st, 3));
	}

	return 0;
}