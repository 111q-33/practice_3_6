#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char *reverse(char* s1, int num, int len)
{
	int i = 0;
	int count = len;
	char *ret = s1;
	while (num)
	{
		char tmp = *s1;
		if (*s1 == ' ')
		{
			num--;
		}
		for (i = 0; i<count - 1; i++)
		{
			*(s1 + i) = *(s1 + i + 1);
		}
		*(s1 + len-1) = tmp;
	}
	return ret;
}
int main()
{
	int i = 0;
	int count = 0;
	char arr[100];
	gets(arr);
	int n = strlen(arr);
	for (i = 0; i<n; i++)
	{
		if (arr[i] == ' ')
			count++;
	}
	reverse(arr, count, n);
	printf("%s\n", arr);
	return 0;
}