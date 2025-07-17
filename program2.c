// To check frequency of entered character

#include <stdio.h>

int main()
{
	int frequency[122] = {0};
	char str[100];
	printf("Enter string: \n");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		frequency[str[i]]++;
	}
	for (int i = 0; i <= 122; i++)
	{
		if (frequency[i] > 0)
		{
			printf("%c => %d\n", i,frequency[i]);
		}
	}

	return 0;
}