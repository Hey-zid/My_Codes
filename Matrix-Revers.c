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

    printf ("\n\nAVERAGE FILTERING\n\n");

    //FOR 2

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            sum = (sum + matrix[i][j]);
        }
    }
    avrg = (sum/9);
    printf("Average for 2 is = %d\n",avrg);
    sum=0;

    //FOR 3
    for(int i = 0;i<3;i++)
    {
        for(int j = 1;j<4;j++)
        {
            sum = (sum + matrix[i][j]);
        }
    }
    avrg = (sum/9);
    printf("Average for 3 is = %d\n",avrg);
    sum=0;

    //FOR 4
    for(int i = 0;i<3;i++)
    {
        for(int j = 2;j<5;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 4 is = %d\n",avrg);
    sum=0;

    //FOR 5
    for(int i = 1;i<4;i++)
    {
        for(int j = 0;j<3;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 5 is = %d\n",avrg);
    sum=0;

    //FOR 6
    for(int i = 1;i<4;i++)
    {
        for(int j = 1;j<4;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 6 is = %d\n",avrg);
    sum=0;

    //FOR 7
    for(int i = 1;i<4;i++)
    {
        for(int j = 2;j<5;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 7 is = %d\n",avrg);
    sum=0;

    //FOR 8
    for(int i = 2;i<5;i++)
    {
        for(int j = 0;j<3;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 8 is = %d\n",avrg);
    sum=0;

    //FOR 9
    for(int i = 2;i<5;i++)
    {
        for(int j = 1;j<4;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 9 is = %d\n",avrg);
    sum=0;

    //FOR 1
    for(int i = 2;i<5;i++)
    {
        for(int j = 2;j<5;j++)
        {
            sum = (sum + matrix[i][j]);
        }avrg = (sum/9);
    }

    printf("Average for 1 is = %d\n",avrg);
    sum=0;





    return 0;
}
