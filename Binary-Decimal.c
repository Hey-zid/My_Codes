#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Length of your Binary Number : ");
    scanf("%d",&n);

    int binary[n],i,j,k;

    printf("\nEnter the Numbers\n");
    for (i=0;i<n;i++)
    {
        printf("binary[%d] : ",i);
        scanf("%d",&binary[i]);
        //if (i != 1 && i != 0)
            //printf("This is not a Binary number press 0 or 1 !!");
    }

    printf("The Number is : ");
    for (i=0;i<n;i++)
    {
        printf("%d",binary[i]);
    }


    return 0;
}
