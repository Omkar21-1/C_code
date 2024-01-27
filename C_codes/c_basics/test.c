#include<stdio.h>

int main()
{
  int a[20];
  int j,i;
  int temp;
  int n;
  int k;

  printf("how many  data to store");
  scanf("%d",&n);

  printf("hou many time rorate");
  scanf("%d",&k);

  for(i=1;i<=n;i++)
  {

          printf("enter data");
          scanf("%d",&a[i]);

  }
    for(j=1;j<=k;j++)
    {

     temp=a[n];

     for(i=n;i>=1;i--)
     {
             a[i]=a[i-1];
     }

       a[1]= temp;




    }
    for(i=1;i<=n;i++)
    {
            printf("%d",a[i]);
    }

   return 0;
}
