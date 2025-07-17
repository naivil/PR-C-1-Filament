//palindram

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    printf("Enter a name: \n");
    scanf("%s", name);
    int len = strlen(name);
    int plaindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (name[i] != name[len - i - 1])
        {
            plaindrome = 0;
        }
    }
    if (plaindrome)
    {
        printf("Yes it is palindrome\n");
    }
    else
    {
        printf("No it is not palindrome\n");
    }

    return 0;
}