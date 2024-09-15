#include <stdio.h>

#define candiadate_count

#define candiadate1 "BJP"
#define candiadate2 "CONGRESS"
#define candiadate3 "AAP"
#define candiadate4 "TMC"

int votescount1 = 0, votescount2 = 0, votescount3 = 0, votescount4 = 0, spoiledvotes = 0;

void castvote()
{
    int choice;
    printf("\n\n ### please choose your candiate ###\n\n");
    printf("\n 1.%s", candiadate1);
    printf("\n 2.%s", candiadate2);
    printf("\n 3.%s", candiadate3);
    printf("\n 4.%s", candiadate4);
    printf("\n 5.%s", "none of these");

    printf("\n\n input your choice(1-4) :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        votescount1++;
        break;
    case 2:
        votescount2++;
        break;
    case 3:
        votescount3++;
        break;
    case 4:
        votescount4++;
        break;
    case 5:
        spoiledvotes++;
        break;
    default:
        printf("\n error: wrong choice || please retry");
        getchar();
    }
    printf("\n thanks for vote ||");
}

void votescount()
{
    printf("\n\n #### voting statics ####");
    printf("\n %s-%d", candiadate1, votescount1);
    printf("\n %s-%d", candiadate2, votescount2);
    printf("\n %s-%d", candiadate3, votescount3);
    printf("\n %s-%d", candiadate4, votescount4);
    printf("\n %s-%d", "sopiled votes", spoiledvotes);
}

void getleadingcandidate()
{
    printf("\n\n #### leading candiate ####\n\n");
    if (votescount1 > votescount2 && votescount1 > votescount3 && votescount1 > votescount4)
        printf("[%s]", candiadate1);
    else if (votescount2 > votescount3 && votescount2 > votescount4 && votescount2 > votescount1)
        printf("[%s]", candiadate2);
    else if (votescount3 > votescount4 && votescount3 > votescount2 && votescount3 > votescount1)
        printf("[%s]", candiadate3);
    else if (votescount4 > votescount1 && votescount4 > votescount2 && votescount4 > votescount3)
        printf("[%s]", candiadate4);
    else
        printf("----warning ||| no win situation----");
}

int main()
{
    int i;
    int choice;

    do
    {
        printf("\n\n #### welcome to election /voting 2024 ####");
        printf("\n\n 1.  cast the vote");
        printf("\n2. find the vote count");
        printf("\n3.find the leading candidate");
        printf("\n0. exit");

        printf("\n please enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            castvote();
            break;
        case 2:
            votescount();
            break;
        case 3:
            getleadingcandidate();
            break;
        defoult:
            printf("\n error: invalid choice");
        }
    } while (choice |= 0);
    getchar();
    return 0;
}
