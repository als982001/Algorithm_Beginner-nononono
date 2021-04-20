#include <stdio.h>
#pragma warning(disable:4996)


// Function that compares string s1 and string s2
int Str_cmp(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')	// °°À½
		{
			return 0;
		}
		s1++;
		s2++;
	}

	return (unsigned char)*s1 - (unsigned char)*s2;
}

int main()
{
	char st[128];
	puts("Compare with \"ABCD\" \n");
	puts("This is over whenn string is \"XXXX\"\n");
	while (1)
	{
		printf("String st: ");
		scanf("%s", st);
		if (Str_cmp("XXXX", st) == 0)
			break;
		printf("str_cmp(\"ABCD\", st) = %d \n", Str_cmp("ABCD", st));
	}

	return 0;
}