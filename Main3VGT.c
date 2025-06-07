//A program for Marksheet that contain enter marks, total, percent, highest(with Subject No.), lowest(with Subject No.) and change marks etc. Functions.//

#include <stdio.h>

int main()
{
    int a[6], i, ch, sum, per, hst, ch2, ch3, ch4, Ps, lst;

    printf("Subjects are Hindi, English, Mathematics, Science, Social Science & Sanskrit respectivelly.");

    for (i = 0; i < 6; i++)
    {
        printf("\nEnter Subject %d Marks : ", i + 1);
        scanf("%d", &a[i]);
    }
    do
    {
        hst = a[0];
        lst = a[0];
        sum = 0;
        for (i = 0; i < 6; i++)
        {
            sum += a[i];

            (hst < a[i]) ? hst = a[i] : hst;

            (lst > a[i]) ? lst = a[i] : lst;
        }

        per = sum / 6;

        do
        {
            printf("\nPress 1 for Total Marks.");
            printf("\nPress 2 for Percentage.");
            printf("\nPress 3 for Highest Marks.");
            printf("\nPress 4 for Lowest Marks.");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                printf("\nTotal Marks: %d", sum);
                break;
            case 2:
                printf("\nPercentage: %d", per);
                break;
            case 3:
                printf("\nHighest Marks: %d", hst);
                for (i = 0; i < 6; i++)
                {
                    if (hst == a[i])
                    {
                        printf("\nSubject %d", i + 1);
                    }
                }

                break;
            case 4:
                printf("\nLowest Marks: %d", lst);
                for (i = 0; i < 6; i++)
                {
                    if (lst == a[i])
                    {
                        printf("\nSubject %d", i + 1);
                    }
                }
                break;
            default:
                printf("\nPress Valid Digit.");
                break;
            }
            printf("\nIf Again, Press 5: ");
            scanf("%d", &ch2);

        } while (ch2 == 5);

        printf("If change any subject marks, Press 6: ");
        scanf("%d",&ch3);
        if (ch3==6)
        {
            printf("Enter Subject No.: ");
            scanf("%d",&Ps);
            for (i = 0; i < 6; i++)
            {
                if (Ps == i + 1)
                {

                    printf("Enter Subject %d new marks: ", Ps);
                    scanf("%d", &a[i]);
                    printf("Subject %d Marks:%d", Ps, a[i]);
                }
            }
            printf("\nAfter Update, Again Process Press 7: ");
            scanf("%d",&ch4);
        }

    } while (ch4 == 7);

    return 0;
}
