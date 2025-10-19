#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for 1st Matrix  : ");
    scanf("%d %d", &r1,&c1);

    printf("Enter rows and column for 1st Matrix  : ");
    scanf("%d %d", &r2,&c2);

    while (c1 != r2)
    {
        printf("ERROR !! 1st Matrix's Column must be matched with 2nd Matrix's Row \n");

        printf("Enter rows and column for 1st Matrix  : ");
        scanf("%d %d", &r1,&c1);

        printf("Enter rows and column for 2nd Matrix  : ");
        scanf("%d %d", &r2,&c2);

    }

    printf("\n\n Row i     : %d\n Column i  : %d\n Row ii    : %d\n Column ii : %d\n\n",r1,c1,r2,c2);

    //Now taking input for 1st Matrix
    printf("\nEnter the Elements for 1st Matrix\n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
    }




    //Now taking input for 2nd Matrix
    printf("\nEnter the Elements for 2nd Matrix\n");
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
    }


    //Multiplying The Matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum = sum + first[i][k]  *  second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //Printing First Matrix
    printf("\n\n->First Matrix\n\n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
            printf("%d ",first[i][j]);
            printf("\n");
    }


    //Printing Second Matrix
    printf("\n\n->Second Matrix\n\n");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
            printf("%d ",second[i][j]);
            printf("\n");
    }


    //Printing Final Matrix
    printf("\n\n->Result Matrix\n\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);

        }
        printf("\n");

    }

}
