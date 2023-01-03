#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char password[100];

	strcpy(password, "a");
	for (i = 0; i < 100; i++)
	{
		if (password[i] == '\0')
			break;
		password[i + 1] = password[i] + 1;
	}
	printf("%s\n", password);
	return (0);
}
