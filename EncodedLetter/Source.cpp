#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen(char* word)
{
	int i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char word[999999];
	scanf("%[^\n]word", &word);
	int n = strlen(word);
	for (int i = 0; i < n; i++)
	{
		if ((word[i] >= 'A' && word[i] <= 'V') || (word[i] >= 'a' && word[i] <= 'v'))
		{
			word[i] = word[i] + 4;
		}
		else if ((word[i] >= 'W' && word[i] <= 'Z') || (word[i] >= 'w' && word[i] <= 'z'))
		{
			word[i] = word[i] - 22;
		}
	}
	printf("%s", word);
	return 0;
}