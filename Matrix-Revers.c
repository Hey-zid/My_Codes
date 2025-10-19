#include <stdio.h>

int main()
{
    int sum = 0;
    int avrg;
    int matrix[5][5] =
    {
        {0, 0, 0, 0, 0},
        {0, 2, 3, 4, 0},
        {0, 5, 6, 7, 0},
        {0, 8, 9, 1, 0},
        {0, 0, 0, 0, 0}
    };

    printf("THE MATRIX IS \n\n");
    for(int i = 0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }

    printf ("\n\nAVERAGE FILTERING\n");

    //FOR 2

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            sum = (sum + matrix[i][j]);
        }
    }
    avrg = (sum/9);
    printf("Average of The 1st Element is = %d\n",avrg);

    //FOR 3
    for(int i = 0;i<3;i++)
    {
        for(int j = 1;j<4;j++)
        {
            sum = (sum + matrix[i][j]);
        }
    }
    avrg = (sum/9);
    printf("Average of The 1st Element is = %d\n",avrg);

    //FOR 4
    for(int i = 0;i<3;i++)
    {
        for(int j = 2;j<5;j++)
        {
            sum = (sum + matrix[i][j]);
        }
    }
    avrg = (sum/9);
    printf("Average of The 1st Element is = %d",avrg);





    return 0;
}
