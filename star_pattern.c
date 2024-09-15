#include <stdio.h> //
int main()
{
    int n, j;
    printf("enter the number of row:...");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        // print(i+1)stars
        for (j = 0; j < i + 1; j++)
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//n=5
// *
// **
// ***
// ****
// *****