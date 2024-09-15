#include <stdio.h>
int main()
{
    int i;
    printf(" select traveling: 1 for bus..2 for car ..3 for train: ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("bus...:18 days of trip with rupees of 10k per head only for north india:");
        break;
    case 2:
        printf("car..:65 days of trip with rupees of 30k per head only for north and east india only: ");
        break;
    case 3:
        printf("train..:120 days of trip with rupees of 35k per head only for all over india tour:");
        break;
    default:
        printf("you are that one friend who cancel plan at last moment :");
    }

}
