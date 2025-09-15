#include<stdio.h>
int main()
{
    int first[100][100],second[100][100],result[100][100],r1,r2,c1,c2,i,j,k;

    printf("Enter rows and column for 1st Matrix  : ");
    scanf("%d %d", &r1,&c1);

    printf("Enter rows and column for 1st Matrix  : ");
    scanf("%d %d", &r2,&c2);

    while (c1 != r2)
    {
        printf("ERROR !! 1st Matrix's Column must be matched with 2nd Matrix's Row \n");

        printf("Enter rows and column for 1st Matrix  : ");
        scanf("%d %d", &r1,&c1);

        printf("Enter rows and column for 1st Matrix  : ");
        scanf("%d %d", &r2,&c2);

    }

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




}
