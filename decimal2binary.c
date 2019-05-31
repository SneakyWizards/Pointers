#include <stdio.h>

int main()
{
    int n, n_orig;

    printf("Enter decimal number:\n");
    scanf("%u", &n);
    n_orig = n;

    int number[32], i = 0;

    while (n > 0)
    {
        number[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("%d in binary is : ", n_orig);

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", number[j]);
    }
    printf("\n");
    return 0;
}
