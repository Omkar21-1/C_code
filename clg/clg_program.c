#include<stdio.h>
void main()
{
    int matrix1[3][3],matrix2[3][3],matrixresult[3][3];
    printf("Enter the value of matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("Enter value %d %d  ",i,j);
        scanf("%d",&matrix1[i][j]);
        }printf("\n");
    }
    printf("Enter the values of matrix 2\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("Enter value %d %d  ",i,j);
        scanf("%d",&matrix2[i][j]);
        }printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            matrixresult[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("%3d",matrixresult[i][j]);
    	}printf("\n");
    }
}
