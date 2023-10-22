#include <stdio.h>

int main(void)
{
    int F0 = 0;
    int F1 = 1;
    int Fn = 0;
    int i;

    printf("%d, %d", F0, F1);

    for (i = 2; Fn <= 50; i++)
    {
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;

        if (Fn <= 50)
        {
            printf(", %d", Fn);
        }
    }

    printf("\n");
    return 0;
}

