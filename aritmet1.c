#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

        for (int i = 0; i < n; i++)
    {
        int a, b;
        char op;

        scanf("%d %s %d", &a, &op, &b);
        if (op == '+')
            printf("%d\n", a + b);
        else if (op == '-')
            printf("%d\n", a - b);
        else if (op == '*')
            printf("%d\n", a * b);
        else if (op == '/')
            printf("%d\n", a / b);
        else if (op == '%')
            printf("%d\n", a % b);
    }

    return EXIT_SUCCESS;
}